#include<iostream>
using namespace std;

class Oper_Overload {
    int num;
public:

    void set_num(int s) {
        num = s;
    }
    Oper_Overload()
    {
    	
	}
    Oper_Overload operator+(Oper_Overload ob) {
        Oper_Overload t;
        t.num = num + ob.num;
        cout<<"a is:"<<num<<" b is: "<<ob.num<<" sum of a and b is: "<<t.num<<endl;
        return (t);
        
    }
    void display() {
        cout << num << endl;
    }
};

int main() {
    Oper_Overload num1, num2, result;
    int a, b;
    cout << "Enter the value of Complex Numbers a: ";
    cin >> a;
    cout << "Enter the value of Complex Numbers b: ";
     cin>>b;
    num1.set_num(a);
    num2.set_num(b);
    result = num1 + num2 ;
    
    cout << "Input Values:\n";
    num1.display();
    num2.display();
    cout << "Result is: ";
    result.display();
    return 0;
}
