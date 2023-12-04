#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

string front_back()
{
	string input {""};
	string front {""};
	string result {""};
	printf("Print your text: \n");
	getline(cin, input);
	front = input.substr(0,3);
		
	result = front + input + front;

	return result;

};

int main()
{
	printf("%s\n", front_back().c_str());

	return 0;
}
