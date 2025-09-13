#include <iostream>
using namespace std;

class Student
{
	private:
		int sum;
		float percentage;
		int total;
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
			percentage=(sum/total)*100;
		}
		void display()
		{
			cout<<endl<<"             STUDENT DETAIL          "<<endl;
				cout<<"Total Marks of the Student in all Subject : "<<sum<<endl;
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
	int total=500;
	Student s;
	int mark[5];
	
	cout<<"Enter 5 subject Marks Of Student out of 100: "<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>mark[i];
	}
	
	s.Summing(mark);
	s.percent(total);
	s.display();
	
	return 0;
}
