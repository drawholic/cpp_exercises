#include <vector>
#include <cstdio>
using namespace std;


int main()
{
	vector<int> nums;
	bool res = false;
	int val;
	while(scanf("%d", &val))
	{
		nums.push_back(val);
	};
	for(int i{0}; i<nums.size(); i++)
	{
		
		if(nums[i] == nums[i+1] && nums[i] == nums[i+2])
		{
			res = true;
			break;
		};
	};
	printf("Result: %d\n", res);

	return 0;
}
