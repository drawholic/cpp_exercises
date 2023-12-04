#include <cstdio>



class Rect
{
	int width, height;
	public:
	Rect(int width, int height): width(width), height(height){};
	double area()
	{
		return width * height;
	};
	double perim()
	{
		return 2 * width + 2 * height;
	};

};

int main()
{
	int a,b;
	printf("Print a height and width: \n");
	scanf("%d %d", &a, &b);
	Rect r = Rect(a,b);
	printf("Area: %.1f Perimeter: %.1f\n", r.area(), r.perim());

	return 0;
}
