#include <iostream>
#include <cmath>


using namespace std;

float sphere_volume(float radius)
{

	float vol = (M_PI * pow(radius,3))*4/3;
	return vol;
};
int main()
{
	float r = 0.0;
	cout << "Calculating sphere volume";
	cout << "Print a radius like that: r \n";
	cin >> r;
	cout << "Volume of sphere with radius "<< r << " is " << sphere_volume(r) << "\n";

	return 0;
}
