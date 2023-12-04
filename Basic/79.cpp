#include <cstdio>



bool is_leap(int n)
{
	if(n%4==0)
	{
		if(n>=100)
		{
			if(n%400 == 0 || n%100!=0)
			{
				return true;
			}else{
				return false;
			};	
		}else{
			return true; 
		 };
	}
	else
	{
		return false;
	};
	
};

int main()
{	
	int year {0};

	printf("Print a year to check whether it's a leap year: ");
	scanf("%d", &year);
	if(is_leap(year))
	{
		printf("Year is a leap year\n");
	}
	else
	{
		printf("Year is not a leap year\n");
	};

	return 0;
}
