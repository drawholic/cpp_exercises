#include <iostream>
#include <string>

using namespace std; 

void check_word()
{
	char word[20];
	cin.getline(word, 20);
	if(word[0]=='i' and word[1]=='f')
	{
		cout << word << endl;
	}
	else
	{
		char new_word[3+20];
		new_word[0] = 'i';
		new_word[1] = 'f';
		new_word[2] = ' ';
		for(int i {3}; i<23;i++)
		{
			new_word[i] = word[i-3];
		};
		cout << new_word<<endl;
	};
	
};

int main()	
{
	check_word();
	return 0;
};
