#include <cstdio>

int check_30()
{
	int a, b;
	printf("Print two numbers: a and b\n");
	scanf("%d %d", &a, &b);
	if(a==30 ^ b==30 || a+b == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	};

}

int main()
{

	printf("Result: %d\n", check_30());	
	return 0;
}
