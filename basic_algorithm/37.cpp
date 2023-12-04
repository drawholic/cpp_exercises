#include <cstdio>



int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = a + b;
	if(sum <= 20 && sum >= 10)
	{
		printf("30");		
	}
	else
	{
		printf("%d\n", sum);
	};


}
