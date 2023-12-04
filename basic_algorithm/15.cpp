#include <cstdio>

static bool check_num(int a)
{
	return a >= 20 && a <= 50 ? true : false;	
};

void check_range()
{
	int a {0}, b {0}, c {0};
	printf("Input three numbers: \n");
	scanf("%d %d %d", &a, &b, &c);
	bool result = false;
	result = result || check_num(a) || check_num(b) || check_num(c);
	printf("result: %d\n", result);
	

}


int main()
{
	check_range();

	return 0;
};
