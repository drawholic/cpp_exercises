#include <cstdio>

bool range_check()
{
	int a {0}, b{0};
	printf("Put two numbers: \n");
	scanf("%d %d", &a, &b);
	int sum = a + b;
	if(sum<=400 && sum >= 200)
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
	for(int i {0}; i<1000;i++){
		printf("%d\n", range_check());	
	};
	return 0;
}
