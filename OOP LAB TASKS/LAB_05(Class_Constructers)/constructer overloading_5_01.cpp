// Using a constructor
#include <iostream>
#include <string>
using namespace std;
class Student
{
public :
	
	Student(int sr,string n, int m, char g)
	{
		serial=sr;
		name=n;
		marks=m;
		grade=g;
	}
	Student(int sr,string n, int m, char g, string h)
	{
		serial=sr;
		name=n;
		marks=m;
		grade=g;
		hobby = h;
	}
	void display()
	{
		cout<<"\nNo.\t\tName\t\tMarks\t\tGrade"<<endl;
		cout<<serial<<"\t\t"<<name<<"\t\t"<<marks<<"\t\t"<<grade;
	}
	void ddisplay()
	{
		cout<<"\nNo.\t\tName\t\tMarks\t\tGrade\t\tHobby"<<endl;
		cout<<serial<<"\t\t"<<name<<"\t\t"<<marks<<"\t\t"<<grade<<"\t\t"<<hobby;
	}
	
	private:
	int serial;
    string name;
    int marks=0;
	char grade;
	string hobby;
//setting 
void set_serial(int sr)
{
	serial = sr;
}
void set_name(string n)
{
	name = n;
}
void set_marks(int m)
{
	marks = m;
}
void set_grade(char g)
{
	grade = g;
}
void set_hobby(string h)
{
	hobby = h;
}
//Getting 
int get_serial()
{
	return serial;
}
string get_name()
{
	return name ;
}
int get_marks()
{
	return marks;
}
char get_grade()
{
	return serial;
}
string get_hobby()
{
	return hobby;
}





};
int main()
{
	int id;
	string name;
	int marks;
	string hobby;
	char grade;
	
	cout<<"Enter Serial number of the student : ";
	cin>>id;
	cout<<"Enter name of the student : ";
	cin>>name;
	cout<<"Enter marks of the student : ";
	cin>>marks;
	cout<<"Enter grade of the student : ";
	cin>>grade;
	cout<<"Enter hobby of the student : ";
	cin>>hobby;
	
	
	
	Student S1(id, name, marks, grade, hobby);
	S1.ddisplay(); 
	cout<<endl;
    S1.display();
    
     

return 0;
}
