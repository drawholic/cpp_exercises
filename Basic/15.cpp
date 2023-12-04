#include <iostream>


using namespace std;

int cube_volume(int side){
	return side*side*side;

};

int main()
{
	int s;
	cout << "Volume of cube\n";
	cout << "Print the side of a cube\n";
	cin >> s;
	cout << "The volume of a cube with a side " << s << " s " << cube_volume(s); 
	return 0;
}


