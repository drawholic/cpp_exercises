#include <cstdio>


int difference()
{
	int a = 0;

	printf("print a number: \n");
	scanf("%d", &a);
	
	int res = 51-a;
	if(res<0)
	{
		res = -res;
	};
	if(a>51)
	{
		
		return res+res+res;
	}
	else
	{
		return res;
	};

};


int main()
{
	printf("Result: %d\n", difference());

	return 0;
}
