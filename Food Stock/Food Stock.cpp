

//This Program will demonstrate food ordering system

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{        
    // Declaring Variables And Assigning them values
	int qty,order,qty_burger=25,qty_pizza=15,qty_hotcake=5,qty_coffie=43,qty_icecream=48,qty_sandwich=33,qty_grill=6;
	double prc_burger=120.23,prc_pizza=100.67,prc_hotcake=720.83,prc_coffie=70.23,prc_icecream=70,prc_sandwich=60.33,prc_grill=20.44;
	string name,contact,address;
	char pay;
	float sub_total,tax,sbt_burger,sbt_pizza,sbt_hotcake,sbt_coffie,sbt_icecream,sbt_sandwich,sbt_grill;
	
	//It Will show food item menu to the user
	cout<<"\t\t\t\t\t|WELCOME TO FOOD PALACE|\n\n\n";
	cout<<"\t\t\t\t\t---Here is Our Menu---\n\n";
	cout<<left;
	cout<<"-----------------------------------------------------------------------------------\n";
	cout<<"|"<<setw(8)<<"Food No."<<setw(8)<<"|"<<setw(15)<<"\tFood item"<<setw(15)<<"|\t"<<setw(8)<<"Price"<<setw(8)<<"   |"<<setw(10)<<"In-Stock\t"<<setw(10)<<" |\n";
	cout<<"----------------------------------------------------------------------------\n";
	cout<<"|"<<setw(8)<<"1."<<setw(8)<<"|"<<setw(15)<<"\tBurger"<<setw(9)<<"|"<<setw(8)<<"$120.23\t\t"<<setw(8)<<"|"<<setw(10)<<"25"<<setw(10)<<"|\n";
	cout<<"---------------------------------------------------------------------------\n";
	cout<<"|"<<setw(8)<<"2."<<setw(8)<<"|"<<setw(15)<<"\tPizza"<<setw(10)<<"|"<<setw(7)<<"$100.67\t\t"<<setw(8)<<"|"<<setw(10)<<"15"<<setw(10)<<"|\n";
	cout<<"---------------------------------------------------------------------------\n";
	cout<<"|"<<setw(8)<<"3."<<setw(8)<<"|"<<setw(15)<<"\tHotcake"<<setw(10)<<"|"<<setw(7)<<"$720.83\t      "<<setw(8)<<"  |"<<setw(10)<<"  5"<<setw(10)<<"  |\n";
	cout<<"-----------------------------------------------------------------------------\n";
	cout<<"|"<<setw(8)<<"4."<<setw(8)<<"|"<<setw(15)<<"\tCoffie"<<setw(9)<<"|"<<setw(8)<<"$70.23\t\t"<<setw(8)<<"|"<<setw(10)<<"43"<<setw(10)<<"|\n";	
	cout<<"---------------------------------------------------------------------------\n";
	cout<<"|"<<setw(8)<<"5."<<setw(8)<<"|"<<setw(15)<<"\tIce-Cream"<<setw(9)<<"|"<<setw(8)<<"$70\t"<<setw(8)<<"    |"<<setw(10)<<"    48"<<setw(10)<<"    |\n";	
	cout<<"-------------------------------------------------------------------------------\n";
	cout<<"|"<<setw(8)<<"6."<<setw(8)<<"|"<<setw(15)<<"\tSandwich"<<setw(9)<<"|"<<setw(8)<<"$60.33\t\t"<<setw(8)<<"|"<<setw(10)<<"33"<<setw(12)<<"|\n";	
	cout<<"-------------------------------------------------------------------------\n";
	cout<<"|"<<setw(8)<<"7."<<setw(8)<<"|"<<setw(15)<<"\tGrill"<<setw(9)<<"|"<<setw(8)<<"$20.44\t\t"<<setw(8)<<"|"<<setw(10)<<"6"<<setw(10)<<"|\n";	
	cout<<"---------------------------------------------------------------------------\n\n\n\n";
	
	//Prompting the user to select food item form given menu
	cout<<"What would you like to order ?\n";
	cout<<"Select food item from above menu : ";
	cin>>order;
	
    if(order>0&&order<=7)
      {
        	if(order==1)
		       {
		 	    cout<<"Enter Quantity : "; //Prompting the user to enter quantity of food
      	        cin>>qty;
      	  
      	           if(qty>0&&qty<=25)
      	           {
		             	sbt_burger=qty*prc_burger; //Formula for sub-total of burger
		     	        cout<<"You have to pay $"<<sbt_burger;
		             	cout<<"\nPress 'Y' to accept and 'N' to decline: " ; //Prompting the user to confirm payment
		             	cin>>pay;
			
		            	if(pay=='Y'||pay=='y') //If user enters 'Y' or 'y' it will show updated menu with new stocks
			           {
			       	        cout<<"Your order has been placed and it will arrive in 20 minutes\n";
			                cout<<"\n\n\n\t\t\t\t\t----------------------UPDATED MENU----------------------\n\n\n";
			            	cout<<"-----------------------------------------------------------------------------------\n";
                        	cout<<"|"<<setw(8)<<"Food No."<<setw(8)<<"|"<<setw(15)<<"\tFood item"<<setw(15)<<"|\t"<<setw(8)<<"Price"<<setw(8)<<"   |"<<setw(10)<<"In-Stock\t"<<setw(10)<<" |\n";
                    	    cout<<"----------------------------------------------------------------------------\n";
                   	        cout<<"|"<<setw(8)<<"1."<<setw(8)<<"|"<<setw(15)<<"\tBurger"<<setw(9)<<"|"<<setw(8)<<"$120.23\t\t"<<setw(8)<<"|"<<setw(10)<<qty_burger-qty<<setw(10)<<"|\n";
	                        cout<<"---------------------------------------------------------------------------\n";
                         	cout<<"|"<<setw(8)<<"2."<<setw(8)<<"|"<<setw(15)<<"\tPizza"<<setw(10)<<"|"<<setw(7)<<"$100.67\t\t"<<setw(8)<<"|"<<setw(10)<<"15"<<setw(10)<<"|\n";
                     	    cout<<"---------------------------------------------------------------------------\n";
                         	cout<<"|"<<setw(8)<<"3."<<setw(8)<<"|"<<setw(15)<<"\tHotcake"<<setw(10)<<"|"<<setw(7)<<"$720.83\t      "<<setw(8)<<"  |"<<setw(10)<<"  5"<<setw(10)<<"  |\n";
                        	cout<<"-----------------------------------------------------------------------------\n";
                        	cout<<"|"<<setw(8)<<"4."<<setw(8)<<"|"<<setw(15)<<"\tCoffie"<<setw(9)<<"|"<<setw(8)<<"$70.23\t\t"<<setw(8)<<"|"<<setw(10)<<"43"<<setw(10)<<"|\n";	
            	            cout<<"---------------------------------------------------------------------------\n";
              	            cout<<"|"<<setw(8)<<"5."<<setw(8)<<"|"<<setw(15)<<"\tIce-Cream"<<setw(9)<<"|"<<setw(8)<<"$70\t"<<setw(8)<<"    |"<<setw(10)<<"    48"<<setw(10)<<"    |\n";	
                        	cout<<"-------------------------------------------------------------------------------\n";
                           	cout<<"|"<<setw(8)<<"6."<<setw(8)<<"|"<<setw(15)<<"\tSandwich"<<setw(9)<<"|"<<setw(8)<<"$60.33\t\t"<<setw(8)<<"|"<<setw(10)<<"33"<<setw(12)<<"|\n";	
                         	cout<<"-------------------------------------------------------------------------\n";
            	            cout<<"|"<<setw(8)<<"7."<<setw(8)<<"|"<<setw(15)<<"\tGrill"<<setw(9)<<"|"<<setw(8)<<"$20.44\t\t"<<setw(8)<<"|"<<setw(10)<<"6"<<setw(10)<<"|\n";	
	                        cout<<"---------------------------------------------------------------------------\n\n\n\n"; 
	                        
	                        //Prompting the user to enter their Personal information for billing details
	            
	                        cout<<"Enter your Full Name : "; 
	                        cin.ignore();
	                        getline(cin,name);
	            
	                        cout<<"\nEnter Your Contact Number :";
	                        cin>>contact;
	            
	                        cout<<"\nEnter Your Current Address :";
	                        cin.ignore();
	                        getline(cin,address);
	                        
	                        //It will show the overall summary of order 
	                        cout<<"\n\n\n\t\t\t--------------------SUMMARY OF ORDER--------------------\n\n\n";
	          
	          
	                        cout<<"\n\n\n\t\t\t\t\t|YOU HAVE ORDERED : "<<qty<<" BURGERS|";
	                        cout<<"\n\n\n\t\t\t\t\t|Price per Item = $"<<prc_burger<<"|";
	              
	           
	                        //It will show all the billing details
	                        cout<<"\n\n\n\t\t\t--------------------YOUR BILLING DETAILS------------------\n\n\n";
	            
	            
	                        cout<<"Customer Name : "<<name<<endl;
	                        cout<<"Customer's Home Address : "<<address<<endl;
	                        cout<<"Contact No # : "<<contact<<endl;
	                        cout<<setprecision(5);
	                        cout<<"\n\nSUB-Total = $"<<sbt_burger;
	                        tax=sbt_burger*0.05;
	                        cout<<"\nTAX :$ "<<tax<<endl;
	                        cout<<"TOTAL :$ "<<sbt_burger+tax; 
	                        cout<<"\n\n\t\t\tThank you so much "<<name<<" for ordering\n";
	                        cout<<"\n\n\t\t\tHAVE A NICE DAY :)";
	                        
	                        //If user enters 'N' or 'n' their order will be cancelled
			           }else if (pay=='N'||pay=='n') 
			           {
					   cout<<"You have cancelled the order!!!";
				       } 
		           }else
		         	cout<<"\n\n\t\t--------OOPS :( WRONG INPUT!!!";
	            }
	            
		   
		  
			  
      	    
        	else if(order==2)
      	       {
      	    	cout<<"Enter Quantity : "; //Prompting the user to enter quantity of food
      	        cin>>qty;
      	  
      	          if(qty>0&&qty<=15)
      	           {
		            	sbt_pizza=qty*prc_pizza; //Formula for sub-total of pizza
		            	cout<<"You have to pay $"<<sbt_pizza;
		            	cout<<"\nPress 'Y' to accept and 'N' to decline: " ; //Prompting the user to confirm payment 
		            	cin>>pay;
			  
		             	if(pay=='Y'||pay=='y') //If user enters 'Y' or 'y' it will show updated menu with updated stocks
			           {
			            	cout<<"Your order has been placed and it will arrive in 20 minutes\n";
			                cout<<"\n\n\n\t\t\t\t\t----------------------UPDATED MENU----------------------\n\n\n";
			            	cout<<"-----------------------------------------------------------------------------------\n";
                     	    cout<<"|"<<setw(8)<<"Food No."<<setw(8)<<"|"<<setw(15)<<"\tFood item"<<setw(15)<<"|\t"<<setw(8)<<"Price"<<setw(8)<<"   |"<<setw(10)<<"In-Stock\t"<<setw(10)<<" |\n";
                        	cout<<"----------------------------------------------------------------------------\n";
                     	    cout<<"|"<<setw(8)<<"1."<<setw(8)<<"|"<<setw(15)<<"\tBurger"<<setw(9)<<"|"<<setw(8)<<"$120.23\t\t"<<setw(8)<<"|"<<setw(10)<<"25"<<setw(10)<<"|\n";
	                        cout<<"---------------------------------------------------------------------------\n";
                         	cout<<"|"<<setw(8)<<"2."<<setw(8)<<"|"<<setw(15)<<"\tPizza"<<setw(10)<<"|"<<setw(7)<<"$100.67\t\t"<<setw(8)<<"|"<<setw(10)<<qty_pizza-qty<<setw(10)<<"|\n";
                        	cout<<"---------------------------------------------------------------------------\n";
                        	cout<<"|"<<setw(8)<<"3."<<setw(8)<<"|"<<setw(15)<<"\tHotcake"<<setw(10)<<"|"<<setw(7)<<"$720.83\t      "<<setw(8)<<"  |"<<setw(10)<<"  5"<<setw(10)<<"  |\n";
                        	cout<<"-----------------------------------------------------------------------------\n";
                        	cout<<"|"<<setw(8)<<"4."<<setw(8)<<"|"<<setw(15)<<"\tCoffie"<<setw(9)<<"|"<<setw(8)<<"$70.23\t\t"<<setw(8)<<"|"<<setw(10)<<"43"<<setw(10)<<"|\n";	
            	            cout<<"---------------------------------------------------------------------------\n";
              	            cout<<"|"<<setw(8)<<"5."<<setw(8)<<"|"<<setw(15)<<"\tIce-Cream"<<setw(9)<<"|"<<setw(8)<<"$70\t"<<setw(8)<<"    |"<<setw(10)<<"    48"<<setw(10)<<"    |\n";	
                        	cout<<"-------------------------------------------------------------------------------\n";
                         	cout<<"|"<<setw(8)<<"6."<<setw(8)<<"|"<<setw(15)<<"\tSandwich"<<setw(9)<<"|"<<setw(8)<<"$60.33\t\t"<<setw(8)<<"|"<<setw(10)<<"33"<<setw(12)<<"|\n";	
                        	cout<<"-------------------------------------------------------------------------\n";
            	            cout<<"|"<<setw(8)<<"7."<<setw(8)<<"|"<<setw(15)<<"\tGrill"<<setw(9)<<"|"<<setw(8)<<"$20.44\t\t"<<setw(8)<<"|"<<setw(10)<<"6"<<setw(10)<<"|\n";	
	                        cout<<"---------------------------------------------------------------------------\n\n\n\n"; 
	                        
	                        //Prompting the user to enter their Personal information for billing details
	              
	                        cout<<"Enter your Full Name : ";
	                        cin.ignore();
	                        getline(cin,name);
	            
	                        cout<<"\nEnter Your Contact Number :";
	                        cin>>contact;
	            
	                        cout<<"\nEnter Your Current Address :";
	                        cin.ignore();
	                        getline(cin,address);
	                        
	                        //It will show the overall summary of order
	                        cout<<"\n\n\n\t\t\t--------------------SUMMARY OF ORDER--------------------\n\n\n";
	          
	          
	                        cout<<"\n\n\n\t\t\t\t\t|YOU HAVE ORDERED : "<<qty<<" PIZZAS|";
	                        cout<<"\n\n\n\t\t\t\t\t|Price per Item = $"<<prc_pizza<<"|";
	            
	           
	            			//It will show all the billing details
	                        cout<<"\n\n\n\t\t\t--------------------YOUR BILLING DETAILS------------------\n\n\n";
	            
	            
	                        cout<<"Customer Name : "<<name<<endl;
	                        cout<<"Customer's Home Address : "<<address<<endl;
	                        cout<<"Contact No # : "<<contact<<endl;
	                        cout<<setprecision(5);
	                        cout<<"\n\nSUB-Total = $"<<sbt_pizza;
	                        tax=sbt_pizza*0.05;
	                        cout<<"\nTAX :$ "<<tax<<endl;
	                        cout<<"TOTAL :$ "<<sbt_pizza+tax;
	                        cout<<"\n\n\t\t\tThank you so much "<<name<<" for ordering\n";
	                        cout<<"\n\n\t\t\tHAVE A NICE DAY :)";
	                        
	                     //If user enters 'N' or 'n' their order will be cancelled
			            }else if (pay=='N'||pay=='n')
			            {
			            cout<<"You have cancelled the order!!!";
				    	}
		            }else
		           cout<<"\n\n\t\t--------OOPS :( WRONG INPUT!!!";
		       }
	    	  
				
		       
         	else if(order==3)   
		       {
		    	 cout<<"Enter Quantity : "; //Prompting the user to enter quantity of food
      	         cin>>qty;
      	  
      	          if(qty>0&&qty<=5)
      	           {
		             	sbt_hotcake=qty*prc_hotcake; //Formula for sub-total of hot cakes
		            	cout<<"You have to pay $"<<sbt_hotcake;
		            	cout<<"\nPress 'Y' to accept and 'N' to decline: " ; //Prompting the user to confirm payment
		     	        cin>>pay;
			
		            	if(pay=='Y'||pay=='y') //If user enters 'Y' or 'y' it will show updated menu with updated stocks
			           {
			          	cout<<"Your order has been placed and it will arrive in 20 minutes\n";
			            cout<<"\n\n\n\t\t\t\t\t----------------------UPDATED MENU----------------------\n\n\n";
			        	cout<<"-----------------------------------------------------------------------------------\n";
                      	cout<<"|"<<setw(8)<<"Food No."<<setw(8)<<"|"<<setw(15)<<"\tFood item"<<setw(15)<<"|\t"<<setw(8)<<"Price"<<setw(8)<<"   |"<<setw(10)<<"In-Stock\t"<<setw(10)<<" |\n";
                  	    cout<<"----------------------------------------------------------------------------\n";
                   	    cout<<"|"<<setw(8)<<"1."<<setw(8)<<"|"<<setw(15)<<"\tBurger"<<setw(9)<<"|"<<setw(8)<<"$120.23\t\t"<<setw(8)<<"|"<<setw(10)<<"25"<<setw(10)<<"|\n";
	                    cout<<"---------------------------------------------------------------------------\n";
                  	    cout<<"|"<<setw(8)<<"2."<<setw(8)<<"|"<<setw(15)<<"\tPizza"<<setw(10)<<"|"<<setw(7)<<"$100.67\t\t"<<setw(8)<<"|"<<setw(10)<<"15"<<setw(10)<<"|\n";
                 	    cout<<"---------------------------------------------------------------------------\n";
                     	cout<<"|"<<setw(8)<<"3."<<setw(8)<<"|"<<setw(15)<<"\tHotcake"<<setw(10)<<"|"<<setw(7)<<"$720.83\t      "<<setw(8)<<"  |"<<setw(10)<<"  "<<qty_hotcake-qty<<setw(10)<<"  |\n";
                 	    cout<<"-----------------------------------------------------------------------------\n";
                     	cout<<"|"<<setw(8)<<"4."<<setw(8)<<"|"<<setw(15)<<"\tCoffie"<<setw(9)<<"|"<<setw(8)<<"$70.23\t\t"<<setw(8)<<"|"<<setw(10)<<"43"<<setw(10)<<"|\n";	
            	        cout<<"---------------------------------------------------------------------------\n";
              	        cout<<"|"<<setw(8)<<"5."<<setw(8)<<"|"<<setw(15)<<"\tIce-Cream"<<setw(9)<<"|"<<setw(8)<<"$70\t"<<setw(8)<<"    |"<<setw(10)<<"    48"<<setw(10)<<"    |\n";	
                     	cout<<"-------------------------------------------------------------------------------\n";
                    	cout<<"|"<<setw(8)<<"6."<<setw(8)<<"|"<<setw(15)<<"\tSandwich"<<setw(9)<<"|"<<setw(8)<<"$60.33\t\t"<<setw(8)<<"|"<<setw(10)<<"33"<<setw(12)<<"|\n";	
                    	cout<<"-------------------------------------------------------------------------\n";
            	        cout<<"|"<<setw(8)<<"7."<<setw(8)<<"|"<<setw(15)<<"\tGrill"<<setw(9)<<"|"<<setw(8)<<"$20.44\t\t"<<setw(8)<<"|"<<setw(10)<<"6"<<setw(10)<<"|\n";	
	                    cout<<"---------------------------------------------------------------------------\n\n\n\n"; 
	                    
	                     //Prompting the user to enter their Personal information for billing details
	            
	                    cout<<"Enter your Full Name : ";
	                    cin.ignore();
	                    getline(cin,name);
	            
	                    cout<<"\nEnter Your Contact Number :";
	                    cin>>contact;
	            
	                    cout<<"\nEnter Your Current Address :";
	                    cin.ignore();
	                    getline(cin,address);
	                    
	                    //It will show the overall summary of order
	                    cout<<"\n\n\n\t\t\t--------------------SUMMARY OF ORDER--------------------\n\n\n";
	          
	          
	                    cout<<"\n\n\n\t\t\t\t\t|YOU HAVE ORDERED : "<<qty<<" HOTCAKES|";
	                    cout<<"\n\n\n\t\t\t\t\t|Price per Item = $"<<prc_hotcake<<"|";
	            
	           
	             		//It will show all the billing details
	                    cout<<"\n\n\n\t\t\t--------------------YOUR BILLING DETAILS------------------\n\n\n";
	            
	            
	                    cout<<"Customer Name : "<<name<<endl;
	                    cout<<"Customer's Home Address : "<<address<<endl;
	                    cout<<"Contact No # : "<<contact<<endl;
	                    cout<<setprecision(5);
	                    cout<<"\n\nSUB-Total = $"<<sbt_hotcake;
	                    tax=sbt_hotcake*0.05;
	                    cout<<"\nTAX :$ "<<tax<<endl;
	                    cout<<"TOTAL :$ "<<sbt_hotcake+tax;
	                    cout<<"\n\n\t\t\tThank you so much "<<name<<" for ordering\n";
	                    cout<<"\n\n\t\t\tHAVE A NICE DAY :)";
	                    
	                    //If user enters 'N' or 'n' their order will be cancelled
			            }  
				        else if (pay=='N'||pay=='n')
			            {
			        	cout<<"You have cancelled the order!!!";
				        }
		            } else
	 	         	cout<<"\n\n\t\t--------OOPS :( WRONG INPUT!!!";
	        	}
	         
	            
		    
		    
			  
		       
	    	else if(order==4) 
		      {
		   	     cout<<"Enter Quantity : "; //Prompting the user to enter quantity of food
      	         cin>>qty;
      	  
      	          if(qty>0&&qty<=43)
      	           {
		         	sbt_coffie=qty*prc_coffie; //Formula for sub-total of coffie
		         	cout<<"You have to pay $"<<sbt_coffie;
		     	    cout<<"\nPress 'Y' to accept and 'N' to decline: " ; //Prompting the user to confirm payment
		     	    cin>>pay;
			
		             	if(pay=='Y'||pay=='y') //If user enters 'Y' or 'y' it will show updated menu with updated stocks
			           {
			          	cout<<"Your order has been placed and it will arrive in 20 minutes\n";
			            cout<<"\n\n\n\t\t\t\t\t----------------------UPDATED MENU----------------------\n\n\n";
			        	cout<<"-----------------------------------------------------------------------------------\n";
                       	cout<<"|"<<setw(8)<<"Food No."<<setw(8)<<"|"<<setw(15)<<"\tFood item"<<setw(15)<<"|\t"<<setw(8)<<"Price"<<setw(8)<<"   |"<<setw(10)<<"In-Stock\t"<<setw(10)<<" |\n";
                  	    cout<<"----------------------------------------------------------------------------\n";
                      	cout<<"|"<<setw(8)<<"1."<<setw(8)<<"|"<<setw(15)<<"\tBurger"<<setw(9)<<"|"<<setw(8)<<"$120.23\t\t"<<setw(8)<<"|"<<setw(10)<<"25"<<setw(10)<<"|\n";
	                    cout<<"---------------------------------------------------------------------------\n";
                     	cout<<"|"<<setw(8)<<"2."<<setw(8)<<"|"<<setw(15)<<"\tPizza"<<setw(10)<<"|"<<setw(7)<<"$100.67\t\t"<<setw(8)<<"|"<<setw(10)<<"15"<<setw(10)<<"|\n";
                     	cout<<"---------------------------------------------------------------------------\n";
                	    cout<<"|"<<setw(8)<<"3."<<setw(8)<<"|"<<setw(15)<<"\tHotcake"<<setw(10)<<"|"<<setw(7)<<"$720.83\t      "<<setw(8)<<"  |"<<setw(10)<<"  5"<<setw(10)<<"  |\n";
                     	cout<<"-----------------------------------------------------------------------------\n";
                    	cout<<"|"<<setw(8)<<"4."<<setw(8)<<"|"<<setw(15)<<"\tCoffie"<<setw(9)<<"|"<<setw(8)<<"$70.23\t\t"<<setw(8)<<"|"<<setw(10)<<qty_coffie-qty<<setw(10)<<"|\n";	
            	        cout<<"---------------------------------------------------------------------------\n";
              	        cout<<"|"<<setw(8)<<"5."<<setw(8)<<"|"<<setw(15)<<"\tIce-Cream"<<setw(9)<<"|"<<setw(8)<<"$70\t"<<setw(8)<<"    |"<<setw(10)<<"    48"<<setw(10)<<"    |\n";	
                	    cout<<"-------------------------------------------------------------------------------\n";
                     	cout<<"|"<<setw(8)<<"6."<<setw(8)<<"|"<<setw(15)<<"\tSandwich"<<setw(9)<<"|"<<setw(8)<<"$60.33\t\t"<<setw(8)<<"|"<<setw(10)<<"33"<<setw(12)<<"|\n";	
                     	cout<<"-------------------------------------------------------------------------\n";
            	        cout<<"|"<<setw(8)<<"7."<<setw(8)<<"|"<<setw(15)<<"\tGrill"<<setw(9)<<"|"<<setw(8)<<"$20.44\t\t"<<setw(8)<<"|"<<setw(10)<<"6"<<setw(10)<<"|\n";	
	                    cout<<"---------------------------------------------------------------------------\n\n\n\n"; 
	                    
	                     //Prompting the user to enter their Personal information for billing details
	            
	                    cout<<"Enter your Full Name : ";
	                    cin.ignore();
	                    getline(cin,name);
	            
	                    cout<<"\nEnter Your Contact Number :";
	                    cin>>contact;
	             
	                    cout<<"\nEnter Your Current Address :";
	                    cin.ignore();
	                    getline(cin,address);
	                    
	                    //It will show the overall summary of order
	                    cout<<"\n\n\n\t\t\t--------------------SUMMARY OF ORDER--------------------\n\n\n";
	          
	          
	                    cout<<"\n\n\n\t\t\t\t\t|YOU HAVE ORDERED : "<<qty<<" Coffies|";
	                    cout<<"\n\n\n\t\t\t\t\t|Price per Item = $"<<prc_coffie<<"|";
	            
	           			
	            		//It will show all the billing details
	                    cout<<"\n\n\n\t\t\t--------------------YOUR BILLING DETAILS------------------\n\n\n";
	            
	            
	                    cout<<"Customer Name : "<<name<<endl;
	                    cout<<"Customer's Home Address : "<<address<<endl;
	                    cout<<"Contact No # : "<<contact<<endl;
	                    cout<<setprecision(5);
	                    cout<<"\n\nSUB-Total = $"<<sbt_coffie;
	                    tax=sbt_coffie*0.05;
	                    cout<<"\nTAX :$ "<<tax<<endl;
	                    cout<<"TOTAL :$ "<<sbt_coffie+tax;
	                    cout<<"\n\n\t\t\tThank you so much "<<name<<" for ordering\n";
	                    cout<<"\n\n\t\t\tHAVE A NICE DAY :)";
	                    
	                    //If user enters 'N' or 'n' their order will be cancelled
			            }else if (pay=='N'||pay=='n')
			           {
			        	cout<<"You have cancelled the order!!!";
				     	}
		        	}else
			        cout<<"\n\n\t\t--------OOPS :( WRONG INPUT!!!";	  
	           }
	              
		 
		   
		   
			   
	    	else if(order==5)
		       {
		    	 cout<<"Enter Quantity : "; //Prompting the user to enter quantity of food
      	         cin>>qty;
      	  
      	           if(qty>0&&qty<=48)
      	           {
		         	sbt_icecream=qty*prc_icecream; //Formula for sub-total of ice-cream
		          	cout<<"You have to pay $"<<sbt_icecream;
		         	cout<<"\nPress 'Y' to accept and 'N' to decline: " ;   //Prompting the user to confirm payment
		         	cin>>pay;
			
		            	if(pay=='Y'||pay=='y') //If user enters 'Y' or 'y' it will show updated menu with updated stocks
			          {
			          	cout<<"Your order has been placed and it will arrive in 20 minutes\n";
			            cout<<"\n\n\n\t\t\t\t\t----------------------UPDATED MENU----------------------\n\n\n";
			         	cout<<"-----------------------------------------------------------------------------------\n";
                     	cout<<"|"<<setw(8)<<"Food No."<<setw(8)<<"|"<<setw(15)<<"\tFood item"<<setw(15)<<"|\t"<<setw(8)<<"Price"<<setw(8)<<"   |"<<setw(10)<<"In-Stock\t"<<setw(10)<<" |\n";
                     	cout<<"----------------------------------------------------------------------------\n";
                     	cout<<"|"<<setw(8)<<"1."<<setw(8)<<"|"<<setw(15)<<"\tBurger"<<setw(9)<<"|"<<setw(8)<<"$120.23\t\t"<<setw(8)<<"|"<<setw(10)<<"25"<<setw(10)<<"|\n";
	                    cout<<"---------------------------------------------------------------------------\n";
                     	cout<<"|"<<setw(8)<<"2."<<setw(8)<<"|"<<setw(15)<<"\tPizza"<<setw(10)<<"|"<<setw(7)<<"$100.67\t\t"<<setw(8)<<"|"<<setw(10)<<"15"<<setw(10)<<"|\n";
                    	cout<<"---------------------------------------------------------------------------\n";
                    	cout<<"|"<<setw(8)<<"3."<<setw(8)<<"|"<<setw(15)<<"\tHotcake"<<setw(10)<<"|"<<setw(7)<<"$720.83\t      "<<setw(8)<<"  |"<<setw(10)<<"  5"<<setw(10)<<"  |\n";
                    	cout<<"-----------------------------------------------------------------------------\n";
                    	cout<<"|"<<setw(8)<<"4."<<setw(8)<<"|"<<setw(15)<<"\tCoffie"<<setw(9)<<"|"<<setw(8)<<"$70.23\t\t"<<setw(8)<<"|"<<setw(10)<<"43"<<setw(10)<<"|\n";	
            	        cout<<"---------------------------------------------------------------------------\n";
              	        cout<<"|"<<setw(8)<<"5."<<setw(8)<<"|"<<setw(15)<<"\tIce-Cream"<<setw(9)<<"|"<<setw(8)<<"$70\t"<<setw(8)<<"    |"<<setw(10)<<"    "<<qty_icecream-qty<<setw(10)<<"    |\n";	
                    	cout<<"-------------------------------------------------------------------------------\n";
                	    cout<<"|"<<setw(8)<<"6."<<setw(8)<<"|"<<setw(15)<<"\tSandwich"<<setw(9)<<"|"<<setw(8)<<"$60.33\t\t"<<setw(8)<<"|"<<setw(10)<<"33"<<setw(12)<<"|\n";	
                	    cout<<"-------------------------------------------------------------------------\n";
            	        cout<<"|"<<setw(8)<<"7."<<setw(8)<<"|"<<setw(15)<<"\tGrill"<<setw(9)<<"|"<<setw(8)<<"$20.44\t\t"<<setw(8)<<"|"<<setw(10)<<"6"<<setw(10)<<"|\n";	
	                    cout<<"---------------------------------------------------------------------------\n\n\n\n"; 
	                    
	            		//Prompting the user to enter their Personal information for billing details
	                    cout<<"Enter your Full Name : ";
	                    cin.ignore();
	                    getline(cin,name);
	              
	                    cout<<"\nEnter Your Contact Number :";
	                    cin>>contact;
	            
	                    cout<<"\nEnter Your Current Address :";
	                    cin.ignore();
	                    getline(cin,address);
	                    
	            	    //It will show the overall summary of order
	                    cout<<"\n\n\n\t\t\t--------------------SUMMARY OF ORDER--------------------\n\n\n";
	          
	          
	                    cout<<"\n\n\n\t\t\t\t\t|YOU HAVE ORDERED : "<<qty<<" ICE-CREAMS|";
	                    cout<<"\n\n\n\t\t\t\t\t|Price per Item = $"<<prc_icecream<<"|";
	                
	           
	            		//It will show all the billing details
	                    cout<<"\n\n\n\t\t\t--------------------YOUR BILLING DETAILS------------------\n\n\n";
	            
	            
	                    cout<<"Customer Name : "<<name<<endl;
	                    cout<<"Customer's Home Address : "<<address<<endl;
	                    cout<<"Contact No # : "<<contact<<endl;
	                    cout<<setprecision(5);
	                    cout<<"\n\nSUB-Total = $"<<sbt_icecream;
	                    tax=sbt_icecream*0.05;
	                    cout<<"\nTAX :$ "<<tax<<endl;
	                     cout<<"TOTAL :$ "<<sbt_icecream+tax;
	                    cout<<"\n\n\t\t\tThank you so much "<<name<<" for ordering\n";
	                    cout<<"\n\n\t\t\tHAVE A NICE DAY :)";
	                    
	                   //If user enters 'N' or 'n' their order will be cancelled
			           }else if (pay=='N'||pay=='n')
			           {
			        	cout<<"You have cancelled the order!!!";
				     	}
			        }else
			        cout<<"\n\n\t\t--------OOPS :( WRONG INPUT!!!";
			}
	         
	            
		 
		   
		   
			    	        
      	else if (order==6)
      	       {
      	       	cout<<"Enter Quantity : "; //Prompting the user to enter quantity of food
      	        cin>>qty;
      	   
      	          if(qty>0&&qty<=33)
           	       {
		         	sbt_sandwich=qty*prc_sandwich;  //Formula for sub-total of sandwich
		         	cout<<"You have to pay $"<<sbt_sandwich;
		         	cout<<"\nPress 'Y' to accept and 'N' to decline: " ; //Prompting the user to confirm payment
		         	cin>>pay;
			
		            	if(pay=='Y'||pay=='y') //If user enters 'Y' or 'y' it will show updated menu with updated stocks
			           {
			         	cout<<"Your order has been placed and it will arrive in 20 minutes\n";
			            cout<<"\n\n\n\t\t\t\t\t----------------------UPDATED MENU----------------------\n\n\n";
			        	cout<<"-----------------------------------------------------------------------------------\n";
                     	cout<<"|"<<setw(8)<<"Food No."<<setw(8)<<"|"<<setw(15)<<"\tFood item"<<setw(15)<<"|\t"<<setw(8)<<"Price"<<setw(8)<<"   |"<<setw(10)<<"In-Stock\t"<<setw(10)<<" |\n";
                    	cout<<"----------------------------------------------------------------------------\n";
                       	cout<<"|"<<setw(8)<<"1."<<setw(8)<<"|"<<setw(15)<<"\tBurger"<<setw(9)<<"|"<<setw(8)<<"$120.23\t\t"<<setw(8)<<"|"<<setw(10)<<"25"<<setw(10)<<"|\n";
	                    cout<<"---------------------------------------------------------------------------\n";
                  	    cout<<"|"<<setw(8)<<"2."<<setw(8)<<"|"<<setw(15)<<"\tPizza"<<setw(10)<<"|"<<setw(7)<<"$100.67\t\t"<<setw(8)<<"|"<<setw(10)<<"15"<<setw(10)<<"|\n";
                    	cout<<"---------------------------------------------------------------------------\n";
                    	cout<<"|"<<setw(8)<<"3."<<setw(8)<<"|"<<setw(15)<<"\tHotcake"<<setw(10)<<"|"<<setw(7)<<"$720.83\t      "<<setw(8)<<"  |"<<setw(10)<<"  5"<<setw(10)<<"  |\n";
                     	cout<<"-----------------------------------------------------------------------------\n";
                    	cout<<"|"<<setw(8)<<"4."<<setw(8)<<"|"<<setw(15)<<"\tCoffie"<<setw(9)<<"|"<<setw(8)<<"$70.23\t\t"<<setw(8)<<"|"<<setw(10)<<"43"<<setw(10)<<"|\n";	
            	        cout<<"---------------------------------------------------------------------------\n";
              	        cout<<"|"<<setw(8)<<"5."<<setw(8)<<"|"<<setw(15)<<"\tIce-Cream"<<setw(9)<<"|"<<setw(8)<<"$70\t"<<setw(8)<<"    |"<<setw(10)<<"    48"<<setw(10)<<"    |\n";	
                    	cout<<"-------------------------------------------------------------------------------\n";
                     	cout<<"|"<<setw(8)<<"6."<<setw(8)<<"|"<<setw(15)<<"\tSandwich"<<setw(9)<<"|"<<setw(8)<<"$60.33\t\t"<<setw(8)<<"|"<<setw(10)<<qty_sandwich-qty<<setw(12)<<"|\n";	
                    	cout<<"-------------------------------------------------------------------------\n";
            	        cout<<"|"<<setw(8)<<"7."<<setw(8)<<"|"<<setw(15)<<"\tGrill"<<setw(9)<<"|"<<setw(8)<<"$20.44\t\t"<<setw(8)<<"|"<<setw(10)<<"6"<<setw(10)<<"|\n";	
	                    cout<<"---------------------------------------------------------------------------\n\n\n\n"; 
	                    
	                    //Prompting the user to enter their Personal information for billing details
	            
	                    cout<<"Enter your Full Name : ";
	                    cin.ignore();
	                    getline(cin,name);
	            
	                    cout<<"\nEnter Your Contact Number :";
	                    cin>>contact;
	            
	                    cout<<"\nEnter Your Current Address :";
	                    cin.ignore();
	                    getline(cin,address);
	                    
	            	    //It will show the overall summary of order
	                    cout<<"\n\n\n\t\t\t--------------------SUMMARY OF ORDER--------------------\n\n\n";
	          
	          
	                    cout<<"\n\n\n\t\t\t\t\t|YOU HAVE ORDERED : "<<qty<<" SANDWICHES|";
	                    cout<<"\n\n\n\t\t\t\t\t|Price per Item = $"<<prc_sandwich<<"|";
	            
	           
	            		//It will show all the billing details
	                    cout<<"\n\n\n\t\t\t--------------------YOUR BILLING DETAILS------------------\n\n\n";
	            
	            
	                    cout<<"Customer Name : "<<name<<endl;
	                    cout<<"Customer's Home Address : "<<address<<endl;
	                    cout<<"Contact No # : "<<contact<<endl;
	                    cout<<setprecision(5);
	                    cout<<"\n\nSUB-Total = $"<<sbt_sandwich;
	                    tax=sbt_sandwich*0.05;
	                    cout<<"\nTAX :$ "<<tax<<endl;
	                    cout<<"TOTAL :$ "<<sbt_sandwich+tax;
	                    cout<<"\n\n\t\t\tThank you so much "<<name<<" for ordering\n";
	                    cout<<"\n\n\t\t\tHAVE A NICE DAY :)";
	                    
	                    //If user enters 'N' or 'n' their order will be cancelled
			            }else if (pay=='N'||pay=='n')
			            {
			           cout<<"You have cancelled the order!!!";
				     	}
		            }else
			        cout<<"\n\n\t\t--------OOPS :( WRONG INPUT!!!";
		        }
	         
	            
		 
			  
			   
			   
		else if(order==7)	
		  {
		  	 cout<<"Enter Quantity : "; //Prompting the user to enter quantity of food
      	     cin>>qty;
      	  
          	  if(qty>0&&qty<=6)
      	       {
		         	sbt_grill=qty*prc_grill; //Formula for sub-total of grill
		         	cout<<"You have to pay $"<<sbt_grill; 
		        	cout<<"\nPress 'Y' to accept and 'N' to decline: " ; //Prompting the user to confirm payment
		        	cin>>pay;
			   
		            	if(pay=='Y'||pay=='y') //If user enters 'Y' or 'y' it will show updated menu with updated stocks 
			        {
			         	cout<<"Your order has been placed and it will arrive in 20 minutes\n";
			            cout<<"\n\n\n\t\t\t\t\t----------------------UPDATED MENU----------------------\n\n\n";
			        	cout<<"-----------------------------------------------------------------------------------\n";
                     	cout<<"|"<<setw(8)<<"Food No."<<setw(8)<<"|"<<setw(15)<<"\tFood item"<<setw(15)<<"|\t"<<setw(8)<<"Price"<<setw(8)<<"   |"<<setw(10)<<"In-Stock\t"<<setw(10)<<" |\n";
                     	cout<<"----------------------------------------------------------------------------\n";
                     	cout<<"|"<<setw(8)<<"1."<<setw(8)<<"|"<<setw(15)<<"\tBurger"<<setw(9)<<"|"<<setw(8)<<"$120.23\t\t"<<setw(8)<<"|"<<setw(10)<<"25"<<setw(10)<<"|\n";
	                    cout<<"---------------------------------------------------------------------------\n";
                     	cout<<"|"<<setw(8)<<"2."<<setw(8)<<"|"<<setw(15)<<"\tPizza"<<setw(10)<<"|"<<setw(7)<<"$100.67\t\t"<<setw(8)<<"|"<<setw(10)<<"15"<<setw(10)<<"|\n";
                     	cout<<"---------------------------------------------------------------------------\n";
                    	cout<<"|"<<setw(8)<<"3."<<setw(8)<<"|"<<setw(15)<<"\tHotcake"<<setw(10)<<"|"<<setw(7)<<"$720.83\t      "<<setw(8)<<"  |"<<setw(10)<<"  5"<<setw(10)<<"  |\n";
                    	cout<<"-----------------------------------------------------------------------------\n";
                    	cout<<"|"<<setw(8)<<"4."<<setw(8)<<"|"<<setw(15)<<"\tCoffie"<<setw(9)<<"|"<<setw(8)<<"$70.23\t\t"<<setw(8)<<"|"<<setw(10)<<"43"<<setw(10)<<"|\n";	
            	        cout<<"---------------------------------------------------------------------------\n";
              	        cout<<"|"<<setw(8)<<"5."<<setw(8)<<"|"<<setw(15)<<"\tIce-Cream"<<setw(9)<<"|"<<setw(8)<<"$70\t"<<setw(8)<<"    |"<<setw(10)<<"    48"<<setw(10)<<"    |\n";	
                     	cout<<"-------------------------------------------------------------------------------\n";
                    	cout<<"|"<<setw(8)<<"6."<<setw(8)<<"|"<<setw(15)<<"\tSandwich"<<setw(9)<<"|"<<setw(8)<<"$60.33\t\t"<<setw(8)<<"|"<<setw(10)<<"33"<<setw(12)<<"|\n";	
                        cout<<"-------------------------------------------------------------------------\n";
            	        cout<<"|"<<setw(8)<<"7."<<setw(8)<<"|"<<setw(15)<<"\tGrill"<<setw(9)<<"|"<<setw(8)<<"$20.44\t\t"<<setw(8)<<"|"<<setw(10)<<qty_grill-qty<<setw(10)<<"|\n";	
	                    cout<<"---------------------------------------------------------------------------\n\n\n\n"; 
	                    
	                    //Prompting the user to enter their Personal information for billing details
	            
	                    cout<<"Enter your Full Name : ";
	                    cin.ignore();
	                    getline(cin,name);
	            
	                    cout<<"\nEnter Your Contact Number :";
	                    cin>>contact;
	            
	                    cout<<"\nEnter Your Current Address :";
	                    cin.ignore();
	                    getline(cin,address);
	                    
	                    //It will show the overall summary of order
	                    cout<<"\n\n\n\t\t\t--------------------SUMMARY OF ORDER--------------------\n\n\n";
	          
	          
	                    cout<<"\n\n\n\t\t\t\t\t|YOU HAVE ORDERED : "<<qty<<" GRILL|";
	                    cout<<"\n\n\n\t\t\t\t\t|Price per Item = $"<<prc_grill<<"|";
	            
	           
	            		//It will show all the billing details
	                    cout<<"\n\n\n\t\t\t--------------------YOUR BILLING DETAILS------------------\n\n\n";
	            
	             
	                    cout<<"Customer Name : "<<name<<endl;
	                    cout<<"Customer's Home Address : "<<address<<endl;
	                    cout<<"Contact No # : "<<contact<<endl;
	                    cout<<setprecision(5);
	                    cout<<"\n\nSUB-Total = $"<<sbt_grill;
	                    tax=sbt_grill*0.05;
	                    cout<<"\nTAX :$ "<<tax<<endl;
	                    cout<<"TOTAL :$ "<<sbt_grill+tax;
	                    cout<<"\n\n\t\t\tThank you so much "<<name<<" for ordering\n";
	                    cout<<"\n\n\t\t\tHAVE A NICE DAY :)";
	                 //If user enters 'N' or 'n' their order will be cancelled
		        	}else if (pay=='N'||pay=='n')
			        {
			        	cout<<"You have cancelled the order!!!";
					}
			    }else
			   cout<<"\n\n\t\t--------OOPS :( WRONG INPUT!!!";
		}
	         
	            
	 
			        
      	   
      	
	  } else
	    cout<<"\n\n\t\t--------OOPS :( WRONG INPUT!!!"	;					
			
	return 0;
}
