#include <cstdio>


bool a_after_a(const char *input)
{
	bool state = false;
	for(int i{0}; i<sizeof(input); i++)
	{
		if(input[i] == 'a')
		{
			if(input[i+1] == 'a')
			{
				state = true;
			}
			break;
		};	
	};
	return state;
}


int main()
{
	char text[20];
	printf("Enter your text: \n");
	scanf("%s",text);

	printf("%d\n", a_after_a(text));

	return 0;
};
