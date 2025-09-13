#include<iostream>
#include<string>
using namespace std;
class Employee
{
	private:
	int	age;
	
	public:
	int id;
	string firstname;
	string lastname;
	int salary;
Employee(int i, string fn, string ln, int s)
  {

cout << endl << "Constructor called."<<endl;
id=i;
firstname=fn;
lastname=ln;
salary=s;
  }
Employee(int ag)
  {
	age = ag;
  }
void set_age(int a)
  {
	age=0;
	age = a;
  }
int get_age()
  {
	return age;
  }


void display()
   {

cout<<endl<<"Employee id: "<<id;
cout<<endl<<"Employee First_Name: "<<firstname;
cout<<endl<<"Employee Last_Name: "<<lastname;
cout<<endl<<"Employee salary: "<<salary;
cout<<endl<<"Employee age: "<<age;

	}
};
int main()
{
	int Age;
Employee Employee1= Employee(1,"Muhammad","Abdullah",10000);
cout<<"Enter age for Abdullah: ";
cin>>Age;
 Employee1.set_age(Age);
Employee1.display();

Employee1.get_age();
cout<<endl;
Employee Employee2= Employee(2,"Muhammad","Hassan",8000);
cout<<"Enter age for Hassan: ";
cin>>Age;
Employee2.set_age(Age);
Employee2.display();
cout<< endl;
cout<<endl;
Employee Employee3= Employee(3,"Muhammad","Hanan",6000);
cout<<"Enter age for Hanan: ";
cin>>Age;
Employee3.set_age(Age);
Employee3.display();


cout<<endl;
return 0;

}
