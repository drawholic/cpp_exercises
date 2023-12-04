#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string s  = "The quick brown fox jumps over the lazy dog fox fox fox";
	size_t pos = s.find("fox");
	while(pos!=string::npos)
	{
		s.replace(pos, 3, "cat");
		pos = s.find("fox");
	};
	
	printf("New string is: %s\n", s.c_str());

	return 0;
}
