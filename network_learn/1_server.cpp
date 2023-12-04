#include <iostream>
#include <cstring>
#include <cstdlib>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    // Step 1: Create a socket
    int serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket == -1) {
        std::cerr << "Error creating socket" << std::endl;
        return EXIT_FAILURE;
    }

    // Step 2: Bind the socket to an IP address and port
    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;            // IPv4
    serverAddress.sin_addr.s_addr = INADDR_ANY;    // Listen on any available interface
    serverAddress.sin_port = htons(8080);          // Port in network byte order

    if (bind(serverSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress)) == -1) {
        std::cerr << "Error binding socket" << std::endl;
        close(serverSocket);
        return EXIT_FAILURE;
    }

    // Step 3: Listen for incoming connections
    if (listen(serverSocket, 10) == -1) {
        std::cerr << "Error listening for connections" << std::endl;
        close(serverSocket);
        return EXIT_FAILURE;
    }

    std::cout << "Server listening on port 8080..." << std::endl;

    while (true) {
        // Step 4: Accept a connection
        sockaddr_in clientAddress;
        socklen_t clientAddrSize = sizeof(clientAddress);
        int clientSocket = accept(serverSocket, (struct sockaddr*)&clientAddress, &clientAddrSize);

        if (clientSocket == -1) {
            std::cerr << "Error accepting connection" << std::endl;
            close(serverSocket);
            return EXIT_FAILURE;
        }

        std::cout << "Client connected from " << inet_ntoa(clientAddress.sin_addr) << std::endl;

        // Step 5: Send a welcome message to the client
        const char* welcomeMessage = "Welcome to the server!";
        send(clientSocket, welcomeMessage, strlen(welcomeMessage), 0);

        // Step 6: Close the connection with the client
        close(clientSocket);
        std::cout << "Client disconnected" << std::endl;
    }

    // Step 7: Close the server socket
    close(serverSocket);

    return EXIT_SUCCESS;
}

