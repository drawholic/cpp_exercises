#include <iostream>
#include <cstdio>
#include <cmath>

int main()
{
	int a,b;
	printf("Input two numbers: \n");
	scanf("%d %d", &a,&b);
	printf("Your numbers are: %d and %d\n", a,b);
	int sum = a+b;
	int digits_number;
	
	if (sum < 10)
	{
		digits_number = 1;
	}
	else
	{
		digits_number = std::log10(std::abs(sum))+1;		
	};
	printf("Number of sum %d is %d\n", sum, digits_number);

	return 0;
}
