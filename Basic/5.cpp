#include <iostream>
#include <limits>
#include <string>

using namespace std;

template<typename T>
void print_limit(string type_name)
{
	constexpr T max_value {numeric_limits<T>::max()};
	constexpr T min_value {numeric_limits<T>::min()};
	cout << "Maximum limit of " << type_name << ": " << max_value << "\n";
	cout << "Minimum limit of " << type_name << ": " << min_value << "\n";	
};


int main()
{
	print_limit<int>("int");
	print_limit<unsigned int>("unsigned int");
	print_limit<long long>("long long int");
	print_limit<unsigned long long>("unsigned long long");
	print_limit<int = char>("char");
	print_limit<signed char>("signed char");
	print_limit<unsigned char>("unsigned char");
	print_limit<short>("short");
	print_limit<unsigned short>("unsigned short");


	return 0;

}
