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
	void display()
	{
	cout<<serial<<"\t\t"<<name<<"\t\t"<<marks<<"\t\t"<<grade;
	}
	
	private:
	int serial;
    string name;
    int marks=0;
	char grade; 


};
int main()
{
 cout<<"No.\t\tName\t\t\tMarks\t\tGrade"<<endl;
Student Student1= Student(1,"Abdullah ",800,  'A'); 
Student1.display();
cout<<endl;
Student Student2= Student(2,"Ahmed \t", 600,  'B'); 
Student2.display();
cout<<endl;
Student Student3= Student(3,"Usman \t", 700,  'D'); 
Student3.display();
cout<<endl;
Student Student4= Student(4,"Ali   \t", 700,  'D'); 
Student4.display();
return 0;
}
