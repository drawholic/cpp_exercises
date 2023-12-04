#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

bool is_prime(int num)
{
	bool prime = true;
	for(int i {2}; i<=num/2; i++)
	{
		if(num%i==0)
		{
			prime = false;
			break;
		};
	};
	return prime;
}

int main()
{
	int num = 0;
	char buf[40];
	vector<string> sums{};
	
	printf("enter number between 4 and 50,000 to check: ");
	scanf("%d", &num);

	for(int i {2};i<=num; i++)
	{
		if(!is_prime(i))
		{
			continue;
		};
		for(int j{2}; j<=num; j++)
		{
			if(!is_prime(j))
			{
				continue;
			};

			if(i+j == num)
			{
				sprintf(buf, "%d + %d = %d", i,j,i+j);
				string res (buf);
				sums.push_back(res);
			}
		};
	};

	for(auto i: sums)
	{
		printf("%s\n", i.c_str());
	};

	return 0;
}
