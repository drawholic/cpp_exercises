#include <iostream>
#include <cstdio>


int main()
{
	int n = 0;
	printf("Print a number to get factorial of: \n");
	scanf("%d", &n);
	if (n == 0)
	{
		printf("factorial(0) = 1");	
	} 
	else 
	{
		int res = 1;
		for(int i=1; i<=n; i++)
		{
			res *= i;
		};
		printf("Factorial(%d) is %d\n",n, res);
	};

	return 0;
}
