#include <cstdio>


class Person
{

	int age;
	char* name = new char[50];
	char* country = new char[50];

	public:
		Person(int age, char* name, char *country): age(age), name(name), country(country){};
		int get_age()
		{
			return age;
		};
		void set_age(int a)
		{
			age = a;
		};
		char* get_name()
		{
			return name;
		};
		void set_name(char* n)
		{
			delete name;
			name = n;
		};
		char* get_country()
		{
			return country;
		};
		void set_country(char* count)
		{
			delete country;
			country = count;
		};
};


int main()
{
	int a;
	char name[50];
	char country[50];
	printf("Enter age, name and country: \n");
	scanf("%d %s %s", &a, name, country);
	Person p = Person(a, name, country);
	printf("Fields are: %d %s %s\n", p.get_age(), p.get_name(), p.get_country());

	return 0;
}
