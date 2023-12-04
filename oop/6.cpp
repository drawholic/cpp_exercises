#include <cstdio>


class Triangle
{
	int a, b, c;

public:
	Triangle(int x, int y, int z)
	{
		if(x > 0 && y > 0 && z > 0)
		{
			a = x;
			b = y;
			c = z;
		};
	};
	bool is_equilateral(){return a == b && b == c;};
	bool is_isosceles(){return a == b || b == c || a == c;};
	bool is_scalene(){return a != b && b != c;};
};



int main()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	Triangle t = Triangle(x,y,z);
	printf("Your triangle:\nEquilateral: %d\nIsosceles: %d\nScalene: %d\n", t.is_equilateral(), t.is_isosceles(), t.is_scalene());
	return 0;
}
