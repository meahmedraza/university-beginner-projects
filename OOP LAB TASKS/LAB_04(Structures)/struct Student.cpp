#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Person {
    char name[20];
    int roll_no;
    int marks;
    float percent;
};

void displayData(Person); 

void displayData(Person p) {
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p.name<<endl;
    cout <<"Roll No: " << p.roll_no<<endl;
    cout << "Marks: " << p.marks<<endl;
    p.percent=p.marks;
	cout<<"percentage is "<<((p.percent/500)*100);
}
void displayData(Person); 
int main() {
    Person p;

    cout << "Enter Full name: ";
    cin.get(p.name,20);
    cout << "Enter roll no: ";
    cin >> p.roll_no;
    cout << "Enter marks out of 500: ";
    cin >> p.marks;
    
    
   
    displayData(p);
    

    return 0;
}
