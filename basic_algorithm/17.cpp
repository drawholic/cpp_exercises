#include <string>
#include <cstdio>
#include <iostream>

using namespace std;


bool check_str(string s)
{
	return s.substr(1,2) == "yt" ? true : false;
};

void print_str()
{
	string input {""};
	printf("Put a string: \n");
	getline(cin, input);

	if(check_str(input))
	{
		string res {""};
		res += input[0];
		res += input.substr(3, input.size());
		printf("result: %s\n", res.c_str());	
	}
	else
	{
		printf("%s\n", input.c_str());
	};
}

int main()
{
	print_str();	

	return 0;
}
