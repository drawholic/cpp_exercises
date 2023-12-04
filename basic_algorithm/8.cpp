#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

void four_copies()
{
	string input = "";
	string res = "";
	printf("Print your string, please: \n");
	
	getline(cin, input);
	
	if(input.size()<2)
	{
		printf("%s\n", input.c_str());
	}
	else
	{
		string substring = input.substr(0, 2);

		for(int i{0}; i<4; i++)
		{
			res += substring;
		};
	
		printf("%s\n", res.c_str());
	};
}; 


int main()
{
	four_copies();	
	
	return 0;
}
