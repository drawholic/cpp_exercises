#include <cstdio>
#include <vector>

using namespace std;


int main()
{
	vector<int> nums;
	int val {};
	int cnt {0};
	while(scanf("%d", &val))
	{
		nums.push_back(val);
	}

	for(int i {0}; i<nums.size();i++)
	{
		if(nums[i] == 5 && (nums[i+1] == 5 || nums[i+1] == 6) )
		{
			cnt++;
		};
	}
	printf("%d\n", cnt);
	return 0;
}
