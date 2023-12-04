#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	char input[20] = {};
	int size;
	scanf("%s", input);
	size = sizeof(input);
	printf("%s size: %d\n", input, size);	
	int counter {0};
	for(int i{0}; i < size; i+=2)
	{
		counter++;
		printf("%c", input[i]);	
	};
	printf("\ncounter: %d\n", counter);
	return 0;
}
