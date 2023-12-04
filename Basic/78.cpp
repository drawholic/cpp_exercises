#include <string>
#include <regex>
#include <iostream>

using namespace std;

int main()
{

	int num, sum;
	string s  ("There are 12 chairs, 15 desks, 1 blackboard and 2 fans.");

	smatch m;
	regex r ("\\d*");

	while(regex_search(s, m, r))
	{
		for(auto x: m)
		{
			cout << x << "\n";
		};	

	};
	sum += num;
	cout<< "num: " << num<<", sum: " <<sum << "\n" << endl;	
	
	return 0;
};
