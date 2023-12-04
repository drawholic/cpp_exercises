#include <iostream>

using namespace std;


int main()
{
	int num = 59;

	cout << "num is " << num << "\n";
	num++;
	cout << "after post inc: "<< num<< "\n";
	++num;
	cout << "after pre inc: " << num << "\n";
	num = num +1;
	cout << "after inc by 1: "<< num<< "\n";
	num--;
	cout << "after post dec: " <<num<< "\n";
	--num;
	cout << "after pre inc: " <<num<< "\n";
	num -= 1;
	cout << "after dec by 1: " <<num<< "\n";

	return 0;
}
