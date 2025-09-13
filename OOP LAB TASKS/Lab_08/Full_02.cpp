#include <iostream>
using namespace std;

class List
{
	private:	
		string movie_name[5];
		string genre[5];
		float IMDB[5];
	
	public:	
	movie()
	{}
	
	void Table(string mn[], string g[], float imdb[])
	{
		for(int i=0;i<5;i++)
		{
			movie_name[i]=mn[i];
			genre[i]=g[i];
			IMDB[i]=imdb[i];
		}	
	}
	// For Searching Movie by its Name 
	int search(string movie) 
	{
		for(int i=0;i<5;i++)
		{
			if(movie_name[i]==movie)
			{
				cout<<"Movie Found\n\n";
				cout <<"\t"<<movie_name[i]<<"\t"<<genre[i]<<"\t"<<IMDB[i];
				return 0;
			}	
		}
		cout<<"\n\nMovie NOT Found";
	}
	// For finding Highest Rate of movie  
	void High_Rating()
	{
		int high=IMDB[0];
		int j;
		for(int i=1;i<5;i++)
		{
			if(IMDB[i]>high)
			{
				j=i;
				high=IMDB[i];
			}
		}
		cout << "\t" << movie_name[j] << "\t" << genre[j] << "\t" << IMDB[j];
	}
	
	void Display()
	{
		cout << "\n\n\tMovie\t\t\tGenre\t\t\tIMDB";
		for(int i=0;i<5;i++)
		{
			cout <<"\n\t" << movie_name[i] <<"\t\t" <<genre[i] <<"\t\t" << IMDB[i];
     	}
	}
};

int  main()
{
	List l;
	string mn[5] = {"Inception", "Peter_Pan", "The_Dark_Knight", "Desperado", "Pulp_Fiction"};
	string g[5] = {"Action   ", "Adventure", "Crime   ", "Thriller", "Crime   "};
	float f[5] = {8.8,7.3,9,7.2,8.9};
	string movie;
	l.Table(mn,g,f);
	
	int num;
	cout<<"\t\tMovie and its Ratings\n\n";

	do
	{
		cout<<"\n\n1. Search Movie by name\n2. Find Highest Rated Movie\n3. List all Movies\nSelect option : ";
		cin>>num;
		switch(num)
		{
			case 1:
				cout<<"Enter Movie Name : ";
				cin>>movie;
				l.search(movie);
				break;
				
			case 2:
				l.High_Rating();
				break;
				
			case 3:
				l.Display();
				break;
			
			default:
				l.Display();
				break;	
		}
	}
	while(num!=-1);
	
	return 0;
	
}
