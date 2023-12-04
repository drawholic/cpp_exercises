#include <cstdio>

int sum_or_triple(int a, int b)
{
	int sum = a+b;
	if(a==b)
	{
		return sum+sum+sum;
	}
	else
	{
		return sum;
	};
};

int main()
{
	int a, b;
	printf("Print two numbers: a b\n");
	scanf("%d %d", &a,&b);
	printf("%d\n", sum_or_triple(a,b));
	return 0;
}
