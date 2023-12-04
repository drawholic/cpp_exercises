#include <iostream>
#include <unistd.h>
#include <cstdio>

using namespace std;

void loading(){

	
	for (int i = 0; i<50; i++)
	{
		for(int j = 0; j<i; j++)
		{
			printf("#");
			usleep(10000);
		};			
		printf("\r");
		cout.flush();
	};



}

int main()
{
	loading();	
	
	return 0;
}
