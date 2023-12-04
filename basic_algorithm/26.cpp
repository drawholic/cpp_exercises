#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int count_aa_proto(char *text, int text_size)
{
	int counter {0};
	const char* sub_str = "aa";
	
	for(int i {0}; i < text_size;i++)
	{
		if(text[i] == 'a' && text[i+1] == 'a')
		{
			if(text[i+2] == 'a')
			{
				i += 2;
				counter += 2;
			}
			else
			{
				i += 1;
				++counter;
			};	
		}
		else
		{
		
			continue;
		};
	
	};
	return counter;
};

int count_aa(string text)
{
	string sub_str {"aa"};
	int counter {0};
	for(int i{0}; i<=text.size(); i++){
		
		size_t pos = text.find(sub_str);
		if (pos != string::npos)
		
		{
		
			size_t aaa_pos = text.find("aaa");
			if(aaa_pos != string::npos)
			{
				counter+=2;
				i = aaa_pos+2;
			}
			else
			{
				counter++;
				i = pos;
			};	
		}
		else
		{
			break;
		}
	}
	return counter;
}


int main()
{
	char input[20];
	printf("Put a string: \n");
	cin >> input;
	int input_size = sizeof(input);
	printf("result: %d\n", count_aa_proto(input, input_size));

	return 0;
};
