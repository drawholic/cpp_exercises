#include <cstdio>

int main()
{
	int a;
	scanf("%d", &a);
	bool state;

	if( a % 3 == 0 && a % 7 == 0)
	{
		state = false;	
	}
	else if (a % 3 == 0 || a % 7 == 0)
	{
		state = true;
	};
	printf("%d\n", state);
	return 0;
}
