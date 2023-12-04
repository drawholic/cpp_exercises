#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

struct Person
{
	int id;
	string name;
	string occupation;

	Person(int id, string name, string occupation): id(id), name(name), occupation(occupation){};
	Person(const Person& p)
	{
		id = p.id;
		name = p.name;
		occupation = p.occupation;
	};

	Person()
	{
		id = 0;
		name = "";
		occupation = "";
	};
};
int main()
{
	string static_name = "Name";
	string static_occupation = "Occupation";

	Person people[10] {};
	for (int i = 0; i <10; i++)
	{
	people[i] = Person{i, static_name+to_string(i), static_occupation + to_string(i)};	
	};
	cout << "Done putting up data\n";
	for (auto i = begin(people); i!=end(people);i++)
	{
		cout << setw(5)<< i->id << setw(10)<< i->name << setw(15) << i->occupation << "\n";
	};
	return 0;
}
