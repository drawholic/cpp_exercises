#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;


bool is_in_range()
{
	char s[20];
	cin.getline(s, 20);
	
	int num = count(begin(s), end(s), 'z');
	
	return num <= 4 && num >= 2 ? true : false;
}	

int main()
{	

	printf("Result: %d\n", is_in_range());
	return 0;
}
