#include <cstdio>


bool temp_check(){

	int a {0}, b {0};
	printf("Input two numbers to check: \n");
	scanf("%d %d", &a, &b);
	if((a>100 && b<0) || (a<0 && b>100))
	{
		return true;
	}
	else
	{
		return false;
	};

}

int main()
{
	printf("%d\n", temp_check());	

	return 0;
}
