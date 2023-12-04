#include <iostream>

using namespace std;


int main()
{
	int max_int = 2147483647;
	int min_int = -2147483648;
	cout << "maxint: " << max_int << "\n";
	cout << "maxint + 1 "<< max_int +1 << "\n";
	cout << "maxint + 2 " << max_int +2 << "\n";
	cout << "product: " << max_int * max_int << "\n";

	cout << "min_int: " << min_int << "\n";
	cout << "minint - 1 " << min_int-1 << "\n";
	cout << "minint - 2 " << min_int -2 << "\n";
	cout << "product: " << min_int * min_int << "\n";	
	return 0;
}
