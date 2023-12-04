#include <iostream>

using namespace std;

void swap_numbers(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
	
};

int main()
{
	int x,y;

	cout << "Swapping numbers\n";
	cout << "Print two numbers like that: a b\n";
	cin >> x >> y;
	swap_numbers(x,y);
	cout << "X and Y are: " << x << " " << y << endl;
	return 0;
}
