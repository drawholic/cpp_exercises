#include <cstdio>



void check_seven_or_three()
{
	int input {0};
	printf("Put your number: ");
	scanf("%d", &input);
	if(input%7 == 0 || input%3 == 0)
	{
		printf("1\n");
	}
	else 
	{
		printf("0\n");
	};

};

int main()
{
	check_seven_or_three();
	return 0;
}
