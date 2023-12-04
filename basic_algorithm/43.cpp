#include <cstdio>
#include <string>
#include <iostream>


using namespace std;

static bool starts_with_f(string *text)
{
	return *((*text).begin()) == 'F' ? true : false;
}

static bool ends_with_b(string *text)
{
	return *((*text).end()-1) == 'B' ? true : false;
}

bool test(string *text)
{
	printf("%c", *((*text).begin()));
	return true;
}

int main()
{
	string input;

	getline(cin, input);
	if(starts_with_f(&input) && ends_with_b(&input))
	{
		printf("FizzBuzz\n");
	} else if(starts_with_f(&input))
	{
		printf("Fizz\n");
	} else if(ends_with_b(&input))
	{
		printf("Buzz\n");
	}
	else
	{
		printf("%s", input.c_str());
	};

	return 0;
}

