#include<fstream>
#include<string.h>
#include<iomanip>
#include<conio.h>
#include<iostream>
 
using namespace std;
 
class Book
{
          char book_no[30];
          char book_name[50];
          char author_name[50];
          int num_copies,book_price;
          int number=0;
          
 
  public:
          void get_book_details()
          {
          			cout<<"\nENTER DETAILS ABOUT BOOK U WANT TO ADD\n";
                    cout<<"\nEnter The Book ID: ";
                    cin>>book_no;
                    cout<<"\nEnter The Name of The Book: ";
                     cin.ignore();
                    cin.getline(book_name,50);
                    cout<<"\nEnter The Author's Name: ";
                    cin.ignore();
                    cin.getline(author_name,50);
                    fflush(stdin);
           			cout<<"\nEnter No. Of Copies : ";
    				cin>>num_copies;
    				cout<<"\nEnter The Price Of Book : ";
    				cin>>book_price;
          }
 
          void show_book()
          {
                    cout<<"\nBook ID: "<<book_no;
                    cout<<"\nBook Name: "<<book_name;
                    cout<<"\nAuthor's Name: "<<author_name;
                    cout<<"\nCOPIES : "<<num_copies;
                     cout<<"\nBOOK PRICE : "<<book_price;
          }
          
          
          void buy_book()
          {
          	
          			cout<<"\nENTER DETAILS ABOUT BOOK YOU WANT TO PURCHASE\n";
                    cout<<"\nEnter The Book ID: ";
                    cin>>book_no;
                    cout<<"\nEnter The Name of The Book: ";
                     cin.ignore();
                    cin.getline(book_name,50);
                    cout<<"\nEnter The Author's Name: ";
                    cin.ignore();
                    cin.getline(author_name,50);
                    fflush(stdin);
           			cout<<"\nEnter No. Of Copies You Want To Buy : ";
    				cin>>number;
          }
         void display_remain_book()
          {
          	num_copies= num_copies-number;
          	if(num_copies<0)
          	
          	{
          		cout<<"OUT OF STOCK....."<<endl;
			  }
			  else
			  {
			  
          cout<<"============================================================================================================================\n";
          cout<<"Book Number"<<setw(25)<<"Book Name"<<setw(27)<<"Author"<<setw(29)<<"Copies"<<setw(29)<<"Prices"<<endl;
          cout<<"============================================================================================================================\n";
           report();
           }
          
          	
		  }
          
          void display_buy_book()
          {
          	
          			cout<<"\n\nDETAILS ABOUT BOOK YOU WANT TO PURCHASE\n";
                    cout<<"\nBook ID:"<<book_no<<endl;
                    cout<<"\nName of The Book: "<<book_name<<endl;
                    cout<<"\nAuthor's Name: "<<author_name<<endl;
           			cout<<"\nNo. Of Copies: "<<number<<endl;
           			cout<<"\nTotal Book's Price: "<<number*book_price<<endl;
          }
          void modify_book()
          {
                    cout<<"\nBook ID : "<<book_no;
                    cout<<"\nModify Book Name : ";
                    cin.ignore();
                    cin.getline(book_name,50);
                    cout<<"\nModify Author's Name: ";
                    cin.ignore();
                    cin.getline(author_name,50);
                    fflush(stdin);
       				cout<<"\nEnter No. Of Copies : ";
    				cin>>num_copies;
          }
          char* getbooknumber()
          {
                    return author_name;
          }
          void report()
          {cout<<book_no<<setw(30)<<book_name<<setw(30)<<author_name<<setw(30)<<num_copies<<setw(30)<<book_price<<endl;}
 
};        
 
       
 
fstream ptr;
Book bk;
void write_book()
{
          system("cls");
          int more_or_main;
          ptr.open("book.dat",ios::out|ios::app);
          do
          {
                    bk.get_book_details();
                    ptr.write((char*)&bk,sizeof(Book));
                    cout<<"\nPress 1 to add more books.";
                    cout<<"\nPress 2 to return to main menu.\n";
                    cout<<"Enter: ";
                    cin>>more_or_main;
          }
		  while(more_or_main == 1);
          ptr.close();
}
 
void display_a_book(char n[])
{
          system("cls");
          cout<<"\nBOOK DETAILS\n";
          int check=0;
          ptr.open("book.dat",ios::in);
          while(ptr.read((char*)&bk,sizeof(Book)))
          {
                    if(strcmpi(bk.getbooknumber(),n)==0)
                    {
                               bk.show_book();
                              check=1;
                    }
          }
          ptr.close();
          if(check==0)
                    cout<<"\n\nBook does not exist";
        getch();
}
 
void modify_book()
{
          system("cls");
          char n[20];
          int found=0;
          cout<<"\n\n\tMODIFY BOOK";
          cout<<"\n\n\tEnter The book ID: ";
          cin>>n;
          ptr.open("book.dat",ios::in|ios::out);
          while(ptr.read((char*)&bk,sizeof(Book)) && found==0)
          {
                    if(strcmpi(bk.getbooknumber(),n)==0)
                    {
                               bk.show_book();
                               cout<<"\nEnter The New Details of book"<<endl;
                               bk.modify_book();
                               int pos=-1*sizeof(bk);
                              ptr.seekp(pos,ios::cur);
                              ptr.write((char*)&bk,sizeof(Book));
                              cout<<"\n\n\t Record Updated Successfully...";
                              found=1;
                    }
          }
          ptr.close();
          if(found==0)
                    cout<<"\n\n Record Not Found ";
          getch();
}
 
void delete_book()
{
          system("cls");
          char n[20];
          int flag=0;
          cout<<"\n\n\n\tDELETE BOOK";
          cout<<"\n\nEnter The Book's ID You Want To Delete: ";
          cin>>n;
          ptr.open("book.dat",ios::in|ios::out);
          
          fstream ptr2;
          ptr2.open("Temp.dat",ios::out);
          ptr.seekg(0,ios::beg);
          while(ptr.read((char*)&bk,sizeof(Book)))
          {
                    if(strcmpi(bk.getbooknumber(),n)!=0)  
                    {
                               ptr2.write((char*)&bk,sizeof(Book));
                    }
                    else
                              flag=1;
          }
          ptr2.close();
          ptr.close();
          remove("book.dat");
          rename("Temp.dat","book.dat");
          if(flag==1)
                    cout<<"\n\n\tRecord Deleted ..";
          else
                    cout<<"\n\nRecord not found";
          getch();
}
 
void display_all_books()
{
          system("cls");
          ptr.open("book.dat",ios::in);
          if(!ptr)
          {
                    cout<<"ERROR!!! FILE COULD NOT BE OPEN ";
                    getch();
                    return;
          }
          cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tBook LIST\n\n";
         cout<<"============================================================================================================================\n";
          cout<<"Book Number"<<setw(25)<<"Book Name"<<setw(27)<<"Author"<<setw(29)<<"Copies"<<setw(29)<<"Prices"<<endl;
          cout<<"============================================================================================================================\n";
          while(ptr.read((char*)&bk,sizeof(Book)))
          {
                    bk.report();
          }
          char ans;
          cout<<"Do you want to buy BOOK (y/n) : ";
          cin>>ans;
          if(ans=='y'||ans=='Y')
          {
          	bk.buy_book();
          	
          	cout<<"\n\nDO YOU WANT TO SEE REMAINING COPIES OF THE BOOKS (y/n) :  ";
          	cin>>ans;
          	if(ans=='y'||ans=='Y')
          	{
          		bk.display_remain_book();
			  }
		  }
		  else
          ptr.close();
          getch();
}
 
int main()
{
          int option = 0;
          for(;;)
          {
                cout<<"\n\t\tPress 1 to TO ADD";
                cout<<"\n\t\tPress 2 to SHOW ALL BOOKS";
                cout<<"\n\t\tPress 3 to SEARCH/CHECK AVAILABILITY";
                cout<<"\n\t\tPress 4 for RECEIPT PAYMENT";
                cout<<"\n\t\tPress 5 to MODIFY BOOKS";
                cout<<"\n\t\tPress 6 to DELETE BOOKS";
                cout<<"\n\t\tPress 7 to Exit";
 			cout<<"\n\t\tOption: ";
 			cin>>option;
 			switch(option)
          	{
                    case 1:  system("cls");
                                         write_book();
                                                   break;
                               case 2: display_all_books();
                                 break;
                    case 3:
                    	      
                              char num[20];
                               system("cls");
                              cout<<"\n\n\tPlease Enter The Author name ";
                              cin>>num;
                              display_a_book(num);
                              break;
                    case 4: bk.display_buy_book();break;        
                    case 5: modify_book();break;
                    case 6: delete_book();break;
                    case 7: cout<<"\n\n**************************************************************THANK YOU**************************************************************";
					exit(0);
                               break;
                    default:cout<<"\a";
          }     
           
          }
}
