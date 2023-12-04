#include <string>
#include <iostream>
#include <cstdio>

using namespace std;

string make_copies(string s, int num_of_copies)
{
	string three_symbols = s.substr(0, 3);
	string result {""};
	
	for(int i{0}; i < num_of_copies; i++)
	{
		result += three_symbols;
	};
	
	return result;
}

int main()
{
	string input {""};
       	int number {0};	
	printf("Print your string and number: \n");
	cin >> input >> number;
	printf("Result: %s\n", make_copies(input, number).c_str());
	return 0;
}
