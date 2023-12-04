#include <cstdio>
#include <string>
#include <map>

#include <iostream>


using namespace std;

int main()
{
	map<string, int> words;
	int num;
	string s;
	
	printf("Print a number of page and a word: word, number\n");
	
	while(cin >> num >> s)
	{	
		if(s=="q"){break;};	
		
		if(!words.contains(s))
		{
			words[s] = words[s]+1;			}
		else
		{
			words[s]++;
		};
	};
	for(auto a = words.begin();a!=words.end(); ++a )
	{
		cout << a->first << " :: " << a->second<<"\n";
	};	
	return 0;
}
