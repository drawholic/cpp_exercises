#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

class Student
{
	string student_name;
	string student_class_name;
	unsigned student_roll_num;
	unsigned* student_marks;

	unsigned marks_capacity;
	unsigned current_length;

	unsigned* double_marks_size(unsigned* prev_marks)
	{
		marks_capacity = marks_capacity + marks_capacity;
		unsigned* new_marks_space = (unsigned*)realloc(prev_marks, marks_capacity*sizeof(unsigned));
		if(!new_marks_space)
		{
			return nullptr;
		};
		return new_marks_space;
	};

public:
	Student(string name, string class_name, unsigned roll_num): 
		student_roll_num(roll_num), 
		current_length(0),
		marks_capacity(20),
		student_name(name),
		student_class_name(class_name)
	{
		student_marks = new unsigned[marks_capacity]();
	};
	~Student()
	{
		delete[] student_marks;
	};
	const char* get_name()
	{
		return student_name.c_str();
	};
	const char* get_class()
	{
		return student_class_name.c_str();
	};
	void append_mark(unsigned mark)
	{

		if (marks_capacity == current_length)
		{
			student_marks = double_marks_size(student_marks);
		};
		student_marks[current_length] = mark;
		current_length++;
	};
	float get_grade()
	{
		float sum = 0;
		for(auto i = begin(); i != end(); ++i)
		{
			sum = sum + (*i);
		};
		return sum / current_length;

	
	};
	class MarkIterator
	{
	private:
		unsigned* ptr;
	public:
		MarkIterator(unsigned* p): ptr(p){};
			
		unsigned operator*() const { return *ptr; };
		MarkIterator& operator++() { ++ptr; return *this; };
		bool operator!=(const MarkIterator& other) const {return ptr != other.ptr; };
	};
	MarkIterator begin(){ return MarkIterator(student_marks);};
	MarkIterator end(){ return MarkIterator(student_marks + current_length); };
	
};

int main()
{
	string st_name = "Jimmy";
        string st_class = "English";
	unsigned roll_num = 1121;
	Student s = Student(st_name, st_class, roll_num);	
	for(unsigned i{1}; i<30; i++)
	{
		s.append_mark(i);
	};
	printf("Student's info:\nName: %s\nClass: %s, Marks: ",s.get_name(), s.get_class());
	for(auto a = s.begin(); a!=s.end(); ++a)
	{
		printf("%u, ", *a);
	};
	printf("\nGrade: %.2f\n", s.get_grade());
	return 0;
};
