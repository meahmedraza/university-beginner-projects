#include <iostream>
using namespace std;
class Fruits
{
protected:
int quantity;
int price=0;
public:
void set_funct (int qnt)
{
quantity = qnt;
}
};
class Mango: public Fruits
{
public:
int display()
{
	cout<<"Quantity of Mango is: "<<quantity<<endl;
	price = (quantity*100);
	cout<<"Price of Mango is: "<<price<<endl;
}
};
class Orange: public Fruits
{
public:
int display()
{
	cout<<"Quantity of Orange is : "<<quantity<<endl;
	price = (quantity*70);
	cout<<"Price of Orange is: "<<price<<endl;	
}
};
int main ()
{

Mango m1;
Orange o1;
int quant1,quant2;
Fruits * f1 = &m1;
Fruits * f2 = &o1;
cout<<"Enter the Quantity of Mangoes you want! (In KG): ";
cin>>quant1;
cout<<"Enter the Quantity of Oranges you want! (In Dozen): ";
cin>>quant2;
f1->set_funct(quant1);
f2->set_funct(quant2);
m1.display();
o1.display();
return 0;
}
