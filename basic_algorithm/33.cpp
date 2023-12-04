#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	string input;
	string result;
	char symbol;

	getline(cin, input);
	cin >> symbol;
	
	for(int i{0}; i<input.length(); i++)
	{
		if(input[i] == symbol && i != 0 && i != input.length()-1)
		{
			continue;
		}
		else 
		{
			result += input[i];
		};
	};
	printf("%s", result.c_str());

	return 0;
}
