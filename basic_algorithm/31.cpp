#include <cstdio>
#include <vector>

using namespace std;

int main()
{
	int cnt = 0;
	std::vector<int> nums;	
	int val;
	bool state = false;

	while(scanf("%d", &val) == 1 && cnt < 10)
	{
		nums.push_back(val);
		cnt++; 
	};

	for(auto i = nums.begin(); i != nums.end(); i++)
	{ 
		if(*i == 1 && *(i+1) == 2 && *(i+2) == 3)
		{
			state = true;
			break;
		};		
	};
	printf("%d\n", state);
	return 0;
}
