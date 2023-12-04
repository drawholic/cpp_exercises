#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{	
	int num {0};
	vector<int> nums {};
	
	for(int i {0}; cin >> num; i++)
	{
		nums.push_back(num);
	};
	
	auto res =  max_element(nums.begin(), nums.end(), [](int a, int b){return a<b;});
	cout << *res << "\n";

	return 0;
}
