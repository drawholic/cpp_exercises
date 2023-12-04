#include  <iostream>


class Circle{
private:
	int r;
public:
	Circle(int r = 1): r(r){};
	float circumference()
	{
		return 3.14 * r * 2;
	};
	float area()
	{
		return 3.14 * r * r;	
	};
};
int main()
{
	Circle c = Circle(5);
	printf("area: %f, circum: %f \n",c.area(), c.circumference());
	return 0;
}
