#include <iostream>
using namespace std;
// Base class BasicInfo
class BasicInfo
{
public:
protected:
string Name, gender;
int  empId;
void getBasicInfo(void)
{
cout<<"Enter employee's basic info:"<<endl;
cout<<"Enter Name: ";
cin>>Name;
cout<<"Enter Emp. Id: ";
cin>>empId;
cout<<"Enter Gender: ";
cin>>gender;
}
};
class DeptInfo
{
 protected:
 string depart_name, assignedWork;
 int time2complete;
void getDeptInfo(void)
{
cout<<"Enter employee's department info:"<<endl;
cout<<"Enter Department name: ";
cin>>depart_name;
cout<<"Enter Assigned work: ";
cin>>assignedWork;
cout<<"Enter time in hours to complete work: ";
cin>>time2complete;
cout<<endl;
}
};
// Derived class
class Employee: public BasicInfo, public DeptInfo
{
public:
	void getEmployeeInfo()
	{
        getBasicInfo();     
        getDeptInfo(); 
	 } 

  void PrintEmployeeInfo(void)
   {
   	  cout << "Employee's Information is: "<<endl;
            cout << "BASIC INFORMATION..."<<endl;
            cout << "Employee Name is: "<<Name<<endl;     
            cout << "Employee ID is: " <<empId<<endl;       
            cout << "Gender: "<<gender<<endl<<endl;
            
            cout << "DEPARTMENT INFORMATION..."<<endl;
            cout << "Department Name is: "<<depart_name<< endl; 
            cout << "Assigned Work: "<< assignedWork<<endl; 
            cout << "Time to complete work: "<< time2complete<<endl;
	} 
};
int main()
{
Employee E;
E.getEmployeeInfo();
E.PrintEmployeeInfo();
}
