#include <string>
#include <iostream>

using namespace std;

void format_string()
{
	string input;
	string output;
	getline(cin, input);
	for (int i {0}; i<input.length(); )
	{
		output += input[i];

		if(i%2==0)
		{
			i+=1;
		}
		else
		{
			i+=3;
		}
	}
	cout << output << endl;
};


int main()
{
	
	format_string();

	return 0;
}
