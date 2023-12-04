#include <cstdio>
#include <cstring>


int main()
{
	char match[] = "ab";
	char text[32];
	unsigned int counter;
	
	scanf("%s", text);
	
	for (int i {2}; i <= strlen(text); i++)
	{
		if ('a' == text[i] && 'b' == text[i+1])
		{
			counter++;
		};
	};	
	printf("counter: %d\n", counter);

	return 0;
}
