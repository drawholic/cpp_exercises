#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
	int num = 0;
	printf("Print a number: \n");
	scanf("%d", &num);
	for (int i = 1; i<=10; i++)
	{
		printf("%d x %d = %d\n", num, i, num*i);	
	};
	return 0;
}
