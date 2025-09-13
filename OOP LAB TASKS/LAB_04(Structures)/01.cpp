//Write a C++ program to create class name ‘student’ to get and print details of a student. Declare 
//two functions in class name getDetail() and printDetail(). In getDetail() take detail of a 
//student(Name, Roll Number, Total marks out of 500,) and calculate percentage. In printDetail() 
//display the all data of a student. Output should be like this.
//Note: Name should be in two words e.g. (Shahid Khan)

#include<iostream>
#include<string>
using namespace std;

class Student
	{
		public :
		string name;
		int Roll_No, Total_marks;
		float percent;
		
	get_detail()
	{
	cout<<"Enter the name of the student : ";
	cin>>name;
	cout<<"Enter the Roll_No of the student : ";
	cin>>Roll_No;
	cout<<"Enter the Total marks of the student(OUT OF 500) : ";
	cin>>Total_marks;
	
	}
	print_detail()
   {
	cout<<endl<<"Name of the student is : "<<name<<endl;
	cout<<"Roll_No of the student is : "<<Roll_No<<endl;
	cout<<"Total marks of the student(OUT OF 500) is : "<<Total_marks<<endl;
	percent=Total_marks;
	cout<<"Percentage is "<<(percent/500)*100<<endl;
	}
	
};

 int main() 
{
	Student stud; 
    stud.get_detail();
	stud.print_detail();
 
 return 0;
}

