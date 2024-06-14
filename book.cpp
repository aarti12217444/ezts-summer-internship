#include <iostream>
using namespace std;
class Book
{
public:
    string Title;
    string Author;
    string isbn;
    int quantity;
    Book()
    {
        Title = "unknown";
        Author = "unknown";
        isbn = "0000";
        quantity = 0;
    }
    Book(string x, string y, string z, int q)
    {
        Title = x;
        Author = y;
        isbn = z;
        quantity = q;
    }
    string getBooktitle()
    {
        return Title;
    }
    string getBookAuthor()
    {
        return Author;
    }
    string getBookisbn()
    {
        return isbn;
    }
    int getBookquantity()
    {
        return quantity;
    }
    int borrow()
    {
        if (quantity > 0)
        {
            quantity--;
            return true;
        }
        else
        {
            return false;
        }
    }
    int returnbook()
    {
        quantity++;
    }
    //  ~Book(){
    //     cout<<"Memory released";
    //}
};
class Library
{
public:
    static const int maxBooks = 100;
    Book books[maxBooks];
    int currentCount;
    Library()
    {
        currentCount = 0;
    }
    // add a new book to Library
    void addBook(string Title, string Author, string isbn, int quantity)
    {
        if (currentCount < maxBooks)
        {
            books[currentCount] = Book(Title, Author, isbn, quantity);
            currentCount++;
        }
        else
        {
            cout << "Library is full,cannot add more Books.";
        }
    }
    // Dsiplay all Books
    void displayBook()
    {
        for (int i = 0; i < currentCount; i++)
        {
            cout << "Title of the book is: " << books[i].Title << endl;
            cout << "Author of the book is: " << books[i].Author << endl;
            cout << "isbn of the book is: " << books[i].isbn << endl;
            cout << "quantity of the book is: " << books[i].quantity << endl;
        }
    }
    void borrowBook(string isbn)
    {
        bool found = false;
        for (int i = 0; i < currentCount; i++)
        {
            if (books[i].isbn == isbn)
            {
                if (books[i].borrow())
                {
                    cout << "Book borrowed successfully.";
                }
                else
                {
                    cout << "Book is  already borrowed. ";
                }
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Book not found";
        }
    }
    void returnBook(string isbn)
    {
        bool found = false;
        for (int i = 0; i < currentCount; i++)
        {
            if (books[i].isbn == isbn)
            {
                if (books[i].returnbook())
                {
                    cout << "Book returned successfully.";
                }
                else
                {
                    cout << "Book is  already present. ";
                }
                found = true;
                break;
            }
            if (!found)
            {
                cout << "Book not found";
            }
        }
    }
};
int main()
{
    Library lib;
    lib.addBook("HARRYPOTTER", "JK ROWLING", "1234", 6);
    lib.addBook("HARRYPOTTER1", "JK ROWLING", "2345", 6);
    lib.addBook("HARRYPOTTER2", "JK ROWLING", "3456", 6);
    lib.displayBook();
    lib.borrowBook("2345");
    lib.displayBook();
    lib.returnBook("2345");
    lib.displayBook();

    return 0;
}
