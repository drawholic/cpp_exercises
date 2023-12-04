#include <iostream>
#include <cstdio>


int main()
{
	int a = 10,b = 5;
	printf("a = %d and b = %d\n",a,b);
	std::swap(a,b);
	printf("after swap, a = %d and  b = %d\n",a,b );

	return 0;

}
