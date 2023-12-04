#include <cstdio>

int res = 0b000;

bool check_last_digit(int a, int b)
{
	int x = a % 10;
	int y = b % 10;
	return x == y;
};


int main()
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	if(check_last_digit(a, b))
	{
		res = res | 0b001;
	};
	if (check_last_digit(a, c))
	{
		res = res | 0b010;
	};
	if (check_last_digit(b, c))
	{
		res = res | 0b100;
	};
	
	if (res > 0b001)
	{
		printf("%d\n", true);
	}else
	{
		printf("%d\n", false);
	};

	return 0;
}
