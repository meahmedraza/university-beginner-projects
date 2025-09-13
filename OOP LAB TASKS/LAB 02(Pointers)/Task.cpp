#include <iostream>
using namespace std;

class Student
{
	private:
		int sum;
		float percentage;
		float total=sum;
	public:
		
		void Summing(int mark[5])
		{
			for(int i=0;i<5;i++)
			{
				sum+=mark[i];
			}
		}
		void percent(float total)
		{
			percentage=(sum/500)*100;
			cout<<percentage;
		}
		void display()
		{
		    	cout<<"Student Detail is: "<<endl;
				cout<<"Total Marks of all Student : "<<sum<<endl;
				cout<<"Percentage is :"<<percentage<<endl;
				if(percentage>=80)
				{
					cout<<"Grade is A"<<endl;
				}
				else if(percentage>=60)
				{
					cout<<"Grade is B"<<endl;
				}
				else if(percentage<60)
				{
					cout<<"Grade is F"<<endl;
				}
		}
};

int main()
{
	Student s;
	int mark[5];
	
	cout<<"Enter the Subject Marks Of Student out of 100 "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter marks of "<<i+1<<"st student : ";
		cin>>mark[i];
	}
	
	s.Summing(mark);
	s.percent();
	s.display();
	
	return 0;
}
