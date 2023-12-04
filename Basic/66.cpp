#include <cstdio>

int main()
{
	int num;
	printf("Print a number: \n");
	scanf("%d", &num);
	printf("Sum of number from 1 to %d is %d\n", num, (num*(num+1))/2);

	return 0;
}
