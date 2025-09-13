#include <iostream>
using namespace std;
class Parent
{
protected:
string name;
int age,dob;
public:
void setup(string n, int a, int d)
{
	name= n;
	age=a;
	dob=d;
}
void display()
{
	cout<<"Name: "<<name<<endl;
	cout<<"Age: "<<age<<endl;
	cout<<"Date of Birth: "<<dob<<endl;
}
};
class GrandParent
{
public :	
string first_name, address;
void setup(string fn, string ad)
{
	first_name=fn;
	address= ad;
}
void display()
{
	cout<<"First Name: "<<first_name<<endl;
	cout<<"Address: "<<address<<endl;
}
};
int main ()
{
Parent p1;
GrandParent gp1;
Parent *ptr_p1= &p1;
GrandParent *ptr_p2= &gp1;
ptr_p1->setup("Ahmed",19,2002);
ptr_p2->setup("Khalid","Taxila");
p1.display();
gp1.display();
return 0;
}
