#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> numbers(7);
	printf("Print seven numbers with spaces: ");
	for(int i = 0; i<7; i++)
	{
		int n;
		scanf("%d", &n);
		numbers[i] = n;
	};
	sort(numbers.rbegin(), numbers.rend());
	for(auto i: numbers)
	{
		printf("%d ", i);
	};

	printf("\n");
	return 0;
}
