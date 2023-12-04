#include <cstdio>
#include <cstring>
int main()
{
	char text[32];
	printf("put some text: \n");
	scanf("%s", text);
	int length = strlen(text);
	
	for(int i{0}; i < length; i++)
	{
		for(int j{0}; j <= i; j++){
			printf("%c", text[j]);	
		};
	};
	printf("\n");

	return 0;
}
