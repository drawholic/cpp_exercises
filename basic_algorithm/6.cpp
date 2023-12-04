#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

string remove_letter()
{
	string word;
	int index;
	getline(cin, word);
	printf("What is the index of symbol to remove: \n");
	scanf("%d", &index);
	string new_word = "";		

	for(int i{0}; i<20; i++)
	{
		if(i==index)
		{
			continue;
		}else
		{
			new_word += word[i]; 
		};
	};
	return new_word;
};

int main()
{
	printf("Result: %s\n",remove_letter().c_str() );
	
	return 0;
}
