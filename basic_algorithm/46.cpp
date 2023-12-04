#include <cstdio>
#include <cstring>


using namespace std;

void allowed()
{
	int a, b, c;
	char input[5];

	scanf("%d %d %d %s", &a, &b, &c, input);
	bool state = strcmp(input, "true") == 0;

	if (state)
	{
		printf("%d\n", state);
	}else{
		state = a < b && a < c;
		printf("%d\n", state);
	};

}


int main()
{

	allowed();
	return 0;
}
