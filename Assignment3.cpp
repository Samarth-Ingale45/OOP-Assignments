#include<iostream>
using namespace std;
class book
{   public:
    int bookid;
    string title;
    string author;
    float price;
    book(){
      bookid=436388;
      title="Data Structures";
      author="Rahul Chaudhari";
      price=222.21;
    }
    void display(){
     cout<<"Your BookId is: "<<bookid<<'\n';
     cout<<"Title of the Book is: "<<title<<'\n';
     cout<<"Author of the Book is: "<<author<<'\n';
     cout<<"Price of the book is: "<<price<<'\n';

    }




    






};




int main()
{
    book b1;
    b1.display();


    
    return 0;
}
