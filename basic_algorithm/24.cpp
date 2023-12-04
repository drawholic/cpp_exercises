#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

string multiply_string(){
	
	string input {""};
	int num_of_copies {0};
	
	printf("Put a string and a num: \n");
	cin >> input >> num_of_copies;
	
	string result;
	for(int i{0}; i < num_of_copies; i++)
	{
		result += input;
	};

	return result;
}


int main()
{
	printf("%s\n", multiply_string().c_str());

	return 0;
}
