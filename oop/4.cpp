#include <cstdio>
#include <cstring>

class Car
{
	char* company;
	char* model;
	int year;
public:
	Car(int y, const char* c, const char* m): year(y)
	{
		company = new char[strlen(c)+1];
		strcpy(company, c);

		model = new char[strlen(m)+1];
	strcpy(model, m);
	};
	~Car(){
		printf("Destructor\n");
		delete[] company; 
		delete[] model;
	};	
	int get_year(){return year;};
	void set_year(int new_year)
	{
		year = new_year;
	};
	
	char* get_model(){return model;};
	void set_model(char* new_model)
	{
		delete[] model;
		model = new char[strlen(new_model)+1];
		strcpy(model, new_model);
	};

	char* get_company(){return company;};
	void set_company(char *new_company)
	{
		delete[] company;
		company = new char[strlen(new_company)+1];
		company = new_company;
	};
	
};

int main()
{
	int year;
	char comp[100];
	char model[100];
	scanf("%d %s %s", &year, comp, model);
	Car c = Car(year, comp, model);
	printf("Year: %d Company: %s Model: %s\n", c.get_year(), c.get_company(), c.get_model());

	return 0;
}
