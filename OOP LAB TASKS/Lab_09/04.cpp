#include <iostream>
using namespace std;
class Student
{
protected:
int id=0;
string reg_no, name, address;

public:
	
virtual void ShowInfo(string n, string r, int i, string ad)
{
	name=n;
	reg_no=r;
	id=i;
	address=ad;
}
};
class SmallStudent: public Student
{
public:
void ShowInfo()
{
cout<<endl<<"Name of the student is: "<<name<<endl;
cout<<"Reg_No of the student is: "<<reg_no<<endl;
cout<<"Id of the student is: "<<id<<endl;
cout<<"Address of the student is: "<<address;

}
};
int main ()
{
SmallStudent s;
string name,reg,address;
int id;
Student *S1 = &s;
cout<<"Enter the Name: ";
cin>>name;
cout<<"Enter the Reg_No: ";
cin>>reg;
cout<<"Enter the id: ";
cin>>id;
cout<<"Enter the Address: ";
cin>>address;
S1->ShowInfo(name, reg, id, address);
s.ShowInfo();
return 0;
}
