#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
bool pythagorean_theorem(int &a, int &b, int &c)
{
	return a*a + b*b == c*c;

};

int main()
{
	vector<int> tri_sides(3);
	printf("Print three numbers representing length of sides of triangle:\n");
	scanf("%d %d %d", &tri_sides[0], &tri_sides[1], &tri_sides[2]);
	sort(tri_sides.begin(), tri_sides.end());
	if(pythagorean_theorem(tri_sides[0], tri_sides[1], tri_sides[2]))
	{
		printf("The triangle is right\n");
	}
	else
	{
		printf("Meh\n");	
	};

	return 0;
}
