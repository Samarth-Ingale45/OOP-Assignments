#include<iostream>
using namespace std;
class human{
   protected:
   string name;
   int age;
   string  contact;
   public:
   void input(){
    cout<<"Enter Your Full Name:- "<<'\n';
    getline(cin,name);
    cout<<"Enter Your Age:- "<<'\n';
    cin>>age;
    cout<<"Enter Contact Number:- "<<'\n';
    cin>>contact;




   }
void show(){
cout<<"******************Personal Details**************"<<'\n';
cout<<"Your Full Name is:- "<<name<<'\n';
cout<<"Your Age is:- "<<age<<'\n';
cout<<"Your Contact Number is:- "<<contact<<'\n';


}



};
class student:public human{
int rollno;
string branch;
public:
void get(){
  cout<<"Enter Your University Rollno:- "<<'\n';
  cin>>rollno;
  cout<<"Enter Your Branch:- "<<'\n';
  cin>>branch;



}
void display(){
  cout<<"Your University RollNo is:- "<<rollno<<'\n';
  cout<<"Your Branch  is:- "<<branch<<'\n';


}




};



int main()
{ student s1;
    s1.input();
    s1.show();
    s1.get();
    s1.display();

    
    return 0;
}
