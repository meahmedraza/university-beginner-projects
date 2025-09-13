#include <iostream>
#include <limits>
#include <cstring>
#include <string>
#include <iomanip> // for formatting output
using namespace std;




// Base class Book
class Book {
protected:
    char book_no[20];
    char title[50];
    char author[50];
    float price;
    int stock;
    
    
    
    

public:
    // Default constructor
    Book() {
        strcpy(book_no, "Unknown");	
        strcpy(title, "Unknown");
        strcpy(author, "Unknown");
        price = 0.0;
        stock = 0;
    }
    
    
    

    // Overloaded constructor
    Book(const char* b_no, const char* t, const char* a, float p, int s) {
        strcpy(book_no, b_no);
        strcpy(title, t);
        strcpy(author, a);
        price = p;
        stock = s;
    }
    
    
    

    // Virtual function to show book details (Polymorphism)
    virtual void show_book() {
        cout << left << setw(20) << book_no 
             << setw(30) << title 
             << setw(30) << author 
             << setw(10) << stock 
             << setw(10) << price << endl;
    }
    
    
    

    // Overloaded function to input book details
    void get_book_details() {
        cout << "\nEnter Book Number: ";
        cin >> book_no;
        cout << "Enter Title: ";
        cin.ignore();
        cin.getline(title, 50);
        cout << "Enter Author: ";
        cin.getline(author, 50);
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Stock: ";
        cin >> stock;
    }




    void get_book_details(const char* b_no, const char* t, const char* a, float p, int s) {
        strcpy(book_no, b_no);
        strcpy(title, t);
        strcpy(author, a);
        price = p;
        stock = s;
    }

    const char* get_book_number() const {
        return book_no;
    }

    int get_stock() const {
        return stock;
    }

    void set_stock(int s) {
        stock = s;
    }
};





// Derived class PaymentBook
class PaymentBook : public Book {
private:
    float payment;

public:
    PaymentBook() : Book() {
        payment = 0.0;
    }

    PaymentBook(const char* b_no, const char* t, const char* a, float p, int s, float pay)
        : Book(b_no, t, a, p, s) {
        payment = pay;
    }




    // Overriding show_book method to include payment details
    void show_book() override {
        Book::show_book();
        cout << setw(10) << payment << endl;
    }

    void receipt_payment() {
        cout << "\nPayment for book \"" << title << "\" of book number " << book_no << " is " << payment << " received.";
    }




    // Function to update payment
    void update_payment(float pay) {
        payment = pay;
    }
};





// Class to manage Books
class BookManager {
private:
    Book* books[50];
    int book_count;

public:
    BookManager() {
        book_count = 0;
    }

    void add_book(Book* b) {
        if (book_count < 50) {
            books[book_count++] = b;
        } else {
            cout << "Library is full!" << endl;
        }
    }

    void show_all_books() {
    if (book_count == 0) {
        cout << "No books available!" << endl;
        return;
    }

    cout << "\nBook LIST\n";
    cout << "============================================================================================================================\n";
    cout << left << setw(20) << "Book Number" 
         << setw(30) << "Book Name" 
         << setw(30) << "Author" 
         << setw(10) << "Copies" 
         << setw(10) << "Prices" << endl;
    cout << "============================================================================================================================\n";

    for (int i = 0; i < book_count; i++) {
        books[i]->show_book();
    }






    // Asking if the user wants to buy a book
    char choice;
    cout << "\nDo you want to buy a BOOK (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        char book_number[20];
        int quantity;






        // Prompting user for book number and quantity
        cout << "Enter Book Number to buy: ";
        cin >> book_number;

        cout << "Enter quantity to buy: ";
        cin >> quantity;

        for (int i = 0; i < book_count; i++) {
            if (strcmp(books[i]->get_book_number(), book_number) == 0) {
                if (books[i]->get_stock() >= quantity) {
                    books[i]->set_stock(books[i]->get_stock() - quantity);
                    cout << "Successfully bought " << quantity << " copy/copies of \"" << book_number << "\"!" << endl;
                } else {
                    cout << "Not enough stock available. Only " << books[i]->get_stock() << " copy/copies left!" << endl;
                }
                return; // Exit function after buying
            }
        }

        cout << "Book not found!" << endl;
    } else {
        cout << "Thank you!" << endl;
    }
}





    void search_book(const char* book_number) {
        bool found = false;
        // Displaying the book list header
    cout << "\nBook LIST\n";
    cout << "============================================================================================================================\n";
    cout << left << setw(20) << "Book Number" 
         << setw(30) << "Book Name" 
         << setw(30) << "Author" 
         << setw(10) << "Copies" 
         << setw(10) << "Prices" << endl;
    cout << "============================================================================================================================\n";

        for (int i = 0; i < book_count; i++) {
        	
            if (strcmp(books[i]->get_book_number(), book_number) == 0) {
                books[i]->show_book();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Book not found!" << endl;
        }
    }

    void modify_book(const char* book_number) {
        bool found = false;
        // Displaying the book list header
    cout << "\nBook LIST\n";
    cout << "============================================================================================================================\n";
    cout << left << setw(20) << "Book Number" 
         << setw(30) << "Book Name" 
         << setw(30) << "Author" 
         << setw(10) << "Copies" 
         << setw(10) << "Prices" << endl;
    cout << "============================================================================================================================\n";

        for (int i = 0; i < book_count; i++) {
            if (strcmp(books[i]->get_book_number(), book_number) == 0) {
                books[i]->show_book();
                cout << "\nEnter new details of the book: ";
                books[i]->get_book_details();
                cout << "Book updated successfully!" << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Book not found!" << endl;
        }
    }




    void delete_book(const char* book_number) {
        bool found = false;
        for (int i = 0; i < book_count; i++) {
            if (strcmp(books[i]->get_book_number(), book_number) == 0) {
                delete books[i];
                books[i] = books[book_count - 1];
                book_count--;
                cout << "Book deleted successfully!" << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Book not found!" << endl;
        }
    }




    void receipt_payment(const char* book_number) {
    bool found = false;

    for (int i = 0; i < book_count; i++) {
        if (strcmp(books[i]->get_book_number(), book_number) == 0) {
            PaymentBook* pb = dynamic_cast<PaymentBook*>(books[i]);
            if (pb) {
                pb->receipt_payment();
            } else {
                cout << "This is not a Payment Book!" << endl;
            }
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Book not found!" << endl;
    }
}

};

int main() {
    BookManager manager;
    int choice;
    char book_number[20];

    do {
        cout << "\nPress 1 to ADD" << endl;
        cout << "Press 2 to SHOW ALL BOOKS" << endl;
        cout << "Press 3 to SEARCH/CHECK AVAILABILITY" << endl;
        cout << "Press 4 for RECEIPT PAYMENT" << endl;
        cout << "Press 5 to MODIFY BOOKS" << endl;
        cout << "Press 6 to DELETE BOOKS" << endl;
        cout << "Press 7 to Exit" << endl;
        cout << "Option: ";

        // Input validation
        while (!(cin >> choice) || choice < 1 || choice > 7) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid option! Please enter a number between 1 and 7: ";
        }

        switch (choice) {
            case 1:
			    char b_no[20], title[50], author[50];
			    float price;
			    int stock;
			    char paymentChoice;
			
			    cout << "\nEnter Book Details:\n";
			    cout << "Book Number: ";
			    cin >> b_no;
			    cout << "Title: ";
			    cin.ignore();
			    cin.getline(title, 50);
			    cout << "Author: ";
			    cin.getline(author, 50);
			    cout << "Price: ";
			    cin >> price;
			    cout << "Stock: ";
			    cin >> stock;
			
			    cout << "Is this a Payment Book? (y/n): ";
			    cin >> paymentChoice;
			
			    if (paymentChoice == 'y' || paymentChoice == 'Y') {
			        float payment;
			        cout << "Enter Payment Amount: ";
			        cin >> payment;
			        PaymentBook* newPaymentBook = new PaymentBook(b_no, title, author, price, stock, payment);
			        manager.add_book(newPaymentBook);
			    } else {
			        Book* newBook = new Book(b_no, title, author, price, stock);
			        manager.add_book(newBook);
			    }
			    break;
		

            case 2:
                manager.show_all_books();
                break;
            case 3:
                cout << "Enter Book Number to search: ";
                cin >> book_number;
                manager.search_book(book_number);
                break;
            case 4:
                cout << "Enter Book Number for Payment Receipt: ";
                cin >> book_number;
                manager.receipt_payment(book_number);
                break;
            case 5:
                cout << "Enter Book Number to modify: ";
                cin >> book_number;
                manager.modify_book(book_number);
                break;
            case 6:
                cout << "Enter Book Number to delete: ";
                cin >> book_number;
                manager.delete_book(book_number);
                break;
            case 7:
                cout << "Exiting program..." << endl;
                break;
        }
    } while (choice != 7);

    return 0;
}

