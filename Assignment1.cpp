#include<iostream>
using namespace std;
class Book
{ public:
    int bookid;
    string title;
    string author;
    int price;
    void input(int bookNum) {
        cout<<"Enter BookId for Book "<<bookNum<<":"<<'\n';
        cin>>bookid;
        cin.ignore()
        cout<<"Enter Book Title for Book "<<bookNum<<":"<<'\n';
        getline(cin,title);
        cout<<"Enter Author of the Book for Book "<<bookNum<<":"<<'\n';
        getline(cin,author);
        cout<<"Enter the price of Book for Book "<<bookNum<<":"<<'\n';
        cin>>price;
    }
    void display() {
        cout<<"*******BOOK DETAILS********"<<'\n';
        cout<<"Your BookId is: "<<bookid<<'\n';
        cout<<"Your Book Title is: "<<title<<'\n';
        cout<<"Your Book Author is: "<<author<<'\n';
        cout<<"Your Book price is: "<<price<<'\n';
    }
    };
    int main()
{
    Book b1;
    Book b2;
    b1.input(1);
    b1.display();
    b2.input(2);
    b2.display();


    return 0;
}
