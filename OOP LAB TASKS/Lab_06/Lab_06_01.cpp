#include <iostream>
using namespace std;
class Addition
{
private:
	static int a;
	static int b;

public:
	static int sum();
	//set a
	void set_a(int num1)
	{
		this->a=num1;
	}
	//set b
		void set_b(int num2)
	{
		this->b=num2;
	}
	//get b
	int get_a(void)
	{
		return a;
	}
		int get_b(void)
	{
		return b;
	}

	
};
int Addition::a=0;
int Addition::b=0;
	
int Addition::sum()
	{
		
		return (a+b);
	};
int main()
{
	Addition A;
	int x,y;
	cout<<"Enter the first number: ";
	cin>>x;
	cout<<"Enter the seocond number: ";
	cin>>y;
	A.set_a(x);
	A.set_b(y);
	cout<<"Sum of two number is: "<<A.sum();
	

return 0;
}

