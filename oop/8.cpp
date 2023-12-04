#include <cstdio>
#include <cassert>

#define assertm(exp, msg) assert(((void)msg, exp))

class Date
{
	int day, month, year;	
public:
	Date(int d, int m, int y)
	{
		assertm((d < 32 && d >0), "Day is less than 32 and greater than 0");
		assertm((m < 13 && m > 0), "Month is less than 13 and greater than 0");
	if (m == 2)
	{
		assertm(d < 30, "February 28 or 29 days");
		if (d == 29){
			assertm((y % 4 == 0), "Leap year is divisible by 100 only if it is divisible by 400");
		};
	};
	
		day = d;
		month = m;
		year = y;
	};
	void get_date()
	{
		printf("%d/%d/%d\n", day, month, year);
	};
};

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	Date d = Date(a,b,c);
	d.get_date();
	return 0;
}
