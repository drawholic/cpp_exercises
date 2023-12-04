#include <cstdio>
#include <cstring>


class Employee
{
	char* employee_name;
	// unique identifier for each employee(to be changed soon)
	unsigned uid;

	float salary;
public:
	// static var for keeping track of number of employees
	static unsigned employees_number;

	Employee(const char* name, float sal): uid(employees_number), salary(sal)
	{
		employee_name = new char[strlen(name)+1];
		strcpy(employee_name, name);

		employees_number++;
	};

	~Employee()
	{
		delete[] employee_name;
	};
	char* get_name()
	{
		return employee_name;
	};

	void calculate_salary()
	{
		int rate;
		printf("How would you rate the %s's job?\n", employee_name);
		scanf("%d", &rate);
		salary = salary * rate;
		printf("%s's new salary : %.2f\n",employee_name, salary);

	};

	float get_salary()
	{
		return salary;
	};
};

unsigned Employee::employees_number = 0;


int main()
{
	char name[50];
	float salary;
	scanf("%s %f", name, &salary);
	Employee e = Employee(name, salary);
	printf("Employee: %s %.2f\n", e.get_name(), e.get_salary() );
	e.calculate_salary();
	return 0;
};





