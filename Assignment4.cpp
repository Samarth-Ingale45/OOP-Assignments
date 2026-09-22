#include<iostream>
using namespace std;
class book
{   public:
    int bookid;
    string title;
    string author;
    float price;
    book(int id,string t,string a,float p){
      bookid=id;
      title=t;
      author=a;
      price=p;
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
    book b1(5656,"Algorithms","Rahul",490.12);
    b1.display();


    
    return 0;
}
