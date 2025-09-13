#include <iostream>
using namespace std;
class Movie{
	protected:
		string name;
		string genre;
		int rating;
			
			public:
				void setname(string namee)
				{
				name=namee;
				}
				
				void setgenre(string genree)
				{
				genre=genree;
				}
				void setrating(int ratingg)
				{
				rating=ratingg;
				}
				string getname()
				{
				return name;
				}
				string getgenre()
				{
					return genre;
				}
				int getrating()
				{
					return rating;
				}
				
				
				void display(void)
			{
				cout<<"Name\t\t\tGenre\t\t\tRating"<<endl;
				cout<<this->name<<"\t\t\t"<<this->genre<<"\t\t\t"<<this->rating<<endl;
			}
};

int main()
{
	
	string name;
	string genre;
	int rating;
	int choose;
	Movie m1[5];
	cout<<"Enter the name of movie :"<<endl;
	for(int i=0; i<=4; i++)
		{
			cin>>name;
			m1[i].setname(name);
		}
		cout<<"Enter the Genre of movie : "<<endl;
		for(int i=0; i<=4; i++)
		{
			cin>>genre;
			m1[i].setgenre(genre);}
			cout<<"Enter the Rating of movie : "<<endl;
			for(int i=0; i<=4; i++)
		{
			cin>>rating;
			m1[i].setrating(rating);}
	do{
		cout<<"1) Search movies by name: "<<endl;
		cout<<"2) Search for highest rate movies and its detail: "<<endl;
		cout<<"3) List of all movies: "<<endl;
		cout<<"0) Exit: "<<endl;
		cout<<"Choose what do you want to do: ";		
		cin>> choose;
		
		
		switch(choose)
		{
		case 1:

		cout<<"Type name of movie: ";
		cin>>name;
		for(int i=0;i<=4;i++)
		if(m1[i].getname()==name)
		m1[i].display();
				
				break;
			case 2:
		cout<<"Search Highest rate of movie: ";
		cin>>genre;
		for (int i=0;i<=4;i++)
		if(m1[i].getgenre()==genre)
		m1[i].display();
				
				break;
			case 3:
				cout<<"List of all movies: ";
				cin>>rating;
				for(int i=0;i<=4;i++)
				if(m1[i].getrating()==rating)
            m1[i].display();				
				break;
					
				
		}
		
	}while(choose==0);
	return 0;
	

}
