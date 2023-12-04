#include <cstdio>
#include <cmath>

using namespace std;


bool is_in_range(int a)
{
	return a<=30 && a>=20 ? true : false;

};

int larger(int a, int b)
{
	bool is_a = is_in_range(a);
	bool is_b = is_in_range(b);

	if(is_a && is_b)
	{
		return max(a,b);
	}
	else if(is_a)
	{
		return a;	
	}
	else if(is_b)
	{
		return b;
	}else{
		return 0;
	}
};


int main()
{
	int a {0}, b{0};
	printf("Print two numbers: \n");
	scanf("%d %d", &a, &b);
	printf("Result: %d\n", larger(a, b) );


	return 0;
};
