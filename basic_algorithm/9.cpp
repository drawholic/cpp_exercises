#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

void last_char()
{
	string input = "";
	string result = "";
	printf("Print your text please: \n");
	getline(cin, input);

	char last_char = input.back();

	result += last_char;
	result += input;
	result += last_char;
	printf("%s\n", result.c_str());
	
	
};

int main()
{
	last_char();

	return 0;
}
