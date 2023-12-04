#include <cstdio>


bool range_check()
{
	int a {0}, b{0};
	printf("Put two numbers: \n");
	scanf("%d %d", &a, &b);
	if((a<=200 || a>=100) || (b<=200 || b>=100))
	{
		return true;
	}
	else 
	{
		return false;
	};
}


int main()
{
	for(int i {0};i<1000; i++)
	{
		printf("%d\n", range_check());	
	};
	return 0;
}
