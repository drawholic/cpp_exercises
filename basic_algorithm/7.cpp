#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

string swap(string str)
{
	char temp = str.front();
	str[0] = str.back();

	str.back() = temp;
	
	return str;
};

int main()
{
	string input = "";
       	printf("Print your word: \n");
	getline(cin, input);	

	printf("Result: %s\n", swap(input).c_str());

	return 0;
}
