#include <iostream>
#include <cstdio>
#include <bitset>

using namespace std;

bitset<8> to_bitset(int a)
{
	bitset<8> binary_a(a);
	return binary_a;

};

bitset<8> to_bitset(char* a)
{
	string s_a (a);
	bitset<8> binary_a(a);
	return binary_a;

};

int main()
{
	char decimal_num[8];
	bitset<8> binary_num1, binary_num2;

	printf("Put a first number: \n");
	scanf("%s", decimal_num);
	binary_num1 = to_bitset(decimal_num);
	printf("first number as binary %s\n", binary_num1.to_string().c_str());
	
	printf("Put second binary number: \n");
	scanf("%s", decimal_num);	
	binary_num2 = to_bitset(decimal_num);
	printf("second number as binary %s\n", binary_num2.to_string().c_str());
	
	bitset<8> sum = binary_num1 | binary_num2;
	printf("Sum is %s", sum.to_string().c_str());
	return 0;
}
