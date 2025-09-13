#include<iostream>
using namespace std;


class Movie
{
	public : 
	string movie_name[5], genre[5];
	float IMDB[5];
	
};
class moviename : public Movie 
{
	public :
		void set_moviename()
		{
//			 = {"Inception","Peter pan", "The Dark Knight","Desperado","Pulp Fiction"};
			movie_name[5];
		}
		
};
class Genre : public Movie 
{
	public :
	void set_genre()
	{
//			genre[5] = {"Action","Adventure", "Crime","Thriller","Crime"};
	}
	
};
class Imdb : public Movie 
{
	public:
	void set_Imdb()
	{
//	IMDB[5] = {8.8,7.3,9,7.2,8.9};
    }
	
};

int main()
{
	Movie m1;
	m1.movie_name;
    movie_name[5]={"Inception","Peter pan", "The Dark Knight","Desperado","Pulp Fiction"};
	
	return 0;
}

