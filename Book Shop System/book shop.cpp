/* 

 (C++)
Statement--A book shop that maintains the inventory of books that are being sold at shop the list includes
details such as title,author,publisher,price,and available stock.
 
 We have to create a c++ program which will have class called book and member functions for
 1.ADD
 2.UPDATE/MODIFY
 3.SEARCH
 4.PURCHASE
 5.NUMBER OF SUCCESSFUL AND UNSUCCESSFUL TRANSACITONS
 * using new and delete operator

 */
 
 #include<iostream>
 #include<string.h>
 using namespace std;
 class Book
 {
    int book_id, price;
    static int trans;
    char *author,*title,*publ;  //(publ=publication)
    int stock;

    public:
        book()
        {
        author = new char[30];
        title = new char[30];
        publ = new char[30];
        }
        void add()
            {
            cout<<"Enter the details of the book\n";
            cout<<" Title of book:\t";
            cin>>title;
            cout<<"Author :\t";
            cin>>author;
            cout<<"Publication :\t";
            cin>>publ;
            cout<<"Price :\t";
            cin>>price;
            cout<<"Stock:\t";
            cin>>stock;
            }

        void display()
            {
            cout<<"BOOK :\t"<<title<<"\nAuthored by\t"<<author<<"\nPublished by\t"<<publ<<"\nhaving cost:\t"<<price;
            cout<<"Stock:\t"<<stock;
            }


        void update(Book b[])
            {
            int i,flag=0;
            int id, price;
            int n=25; // where n is total number of books avialable
            
            cout<<"Enter the book ID that you want to update: ";
            cin>>book_id;
                        for(i=0;i<n;i++)
                        {
                            if(id==b[i].book_id)
                            {
                                cout<<"Book Found!\n";
                                cout<<"Add the new cost:\n";
                                cin>>price;
                                cout<<"Reocord updated successfully!\n";
                                flag=0;
                            }
                            else
                                    flag=1;
                        }
                if(flag=1)
                {
                    cout<<"Book not found!\n";
                }
            }


          void search(Book b[])
            {
            int i,flag=0;
            int id;
            int n=25;
            cout<<"Enter the book id to be searched: \n";
            cin>>id;
                        for(i=0;i<n;i++)
                        {
                            if(id==b[i].book_id)
                            {
                            cout<<"Book found!\n";
                            b[i].display();
                            flag=0;
                            }
                            else
                            flag=1;
                        }
                        
                        if(flag=1)
                        {
                        cout<<"Book not found!\n";
                        }
                }     
             
             void purchase(Book b[])
                {
                    int i,flag=0;
                    int id,n=25;
                    char ans;
                    int trans;

                    cout<<"Enter the book ID:\t";
                    cin>>id;
                    
                        for(i=0;i<n;i++)
                            {
                            if(b[i].book_id==id)
                                {
                                    cout<<"Book is available\n";
                                    cout<<"Would you like to purchase it\n";
                                    cin>>ans;

                                        if(ans =='y' || ans == 'Y')
                                            {
                                                cout<<"Book price :\t"<<b[i].price;
                                                trans++;
                                                stock--;
                                                cout<<"Purchase successful\n";
                                                flag=0;
                                            }
                                        else
                                            {
                                            cout<<"better Next time\n";
                                            }
                                 }    

                            else
                            {
                                flag=1;
                            }
                    }


                    if(flag=1)
                            {
                            cout<<"book not available \n";
                            }
                            
                        }
                          
              void deleterecord(Book b[])
              {
                  int i,n=25;
                  int flag=0,id;

                  cout<<"Enter the book ID that you want to delete:\n";
                  cin>>id;

                        for(i=0;i<n;i++)
                        {
                            if(b[i].book_id==id)
                            {
                              cout<<"Book Found!\n";
                              delete b[i].title;
                              delete b[i].author;
                              delete b[i].publ;
                              b[i].stock =-1;
                              flag=1;
                              break;
                            }
                            else
                              flag=0;
                        }
                        
                        if(flag=0)
                        {
                         cout<<"Book not found!";
                        }
                    }
                    static void transactions()
                    {
		                   int trans;
                       cout<<"\nSuccessful transactions are= "<<trans;
	                  }
    };
    
    
    int main() {
	Book B[25];
	int i, ch,c = 1 ;

	i = 0;

	do {

//        cout <<  "
        
//            ***************************************************************        
//                Welcome to ZURAIZ BOOKS, C++ project built by Zuraiz Khan.
//
//                               My OOP project in C++!
//            *************************************************************** " ;

		cout<<"\n1.Add a book\n2.Update a book record\n3.Search a book\n4.Purchase a book\n5.Display all book\n6.Diplay transactions\n7.Remove book\nEnter what do you want to do?";
		cin>>ch;

		switch(ch) {
			case 1:
				B[i].add();
				i++;
				break;
      case 2:
        B[i].display();
        i++;
        break;
			case 3:
				B[i].update(B);
				break;
			case 4:
				B[i].search(B);
				break;
			case 5:
				B[i].purchase(B);
				break;
			case 6:
				B[i].transactions();
				break;
			case 7:
				B[i].deleterecord(B);
				break;
			default:
				cout<<"\nSorry, you entered wrong choice \n Please try again";
		}

		cout<<"\n Do you want to continue?\n1.Yes 2.No";
		cin>>c;

	} while(c==1);

	return 0;
}
