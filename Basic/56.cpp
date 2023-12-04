#include <string>
#include <cstdio>

int main()
{
	std::string s = "Hello, World";
	printf("The length of string s is: %ld\n", s.length());
	printf("The char at index 1 is %c\n", s.at(1));
	printf("The char at index 1 is %c\n", s[1]);
	printf("Is the string empty: %d\n", s.empty());
	printf("Substring: %s\n", s.substr(3,4).c_str());
	return 0;
}
