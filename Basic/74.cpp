#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	vector<int> numbers;
	int temp;
	while(cin>>temp)
	{
		numbers.push_back(temp);
	
	};
	sort(numbers.begin(), numbers.end());
	for(auto i: numbers)
	{
		printf("%d ", i);
	};
	printf("\nDifference between highest and lowest: %d", numbers.back()-numbers.front());
	return 0;
}
