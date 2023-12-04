#include <cstdio>
#include <cmath>

using namespace std;

int closest_to_hundred(int a, int b)
{
	if(a==b)
	{
		return 0;
	}
	else
	{
		 return abs(100-a) < abs(100-b)? a : b; 
	};

}


int main()
{
	int a, b;
	printf("Print two numbers: \n");
	scanf("%d %d", &a, &b);
	printf("Closest to one hundred is %d\n", closest_to_hundred(a,b));


	return 0;
}
