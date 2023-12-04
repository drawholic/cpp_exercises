#include <iostream>
#include <cstdio>

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8};
	int even_sum = 0;
	int odd_sum = 0;
	int arr_length = (sizeof(arr) / sizeof(arr[0]));

	for (int i = 0; i<arr_length; i++)
	{
		if(arr[i] % 2==0)
		{
			even_sum += arr[i];
		} else {
			odd_sum += arr[i];
		};
	};
	printf("Sum of evens and odds: %d and %d\n", even_sum, odd_sum);
	return 0;
}
