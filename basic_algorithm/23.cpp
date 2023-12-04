#include <cstdio>


bool last_digits_compare(int a, int b)
{
	int a_last_digit = a%10;
	int b_last_digit = b%10;
	
	if(a_last_digit == b_last_digit)
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
	int a,b;
	printf("Put two numbers: \n");
	scanf("%d %d", &a, &b);
	printf("Result: %d\n", last_digits_compare(a, b));


	return 0;
}
