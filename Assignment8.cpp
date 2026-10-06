#include<iostream>
using namespace std;
class person{
 protected:
 string name;
 int age;
 public:
  void set(){
  cout<<"Enter Your Full Name:- "<<'\n';
  getline(cin,name);
  cout<<"Enter Age:- "<<'\n';
  cin>>age;


  }
  void show(){
    cout<<"**********PERSON DETAILS BEGINS***********"<<'\n';
  cout<<"Your Full Name is:- "<<name<<'\n';
  cout<<"Your Age is:- "<<age<<'\n';


  }


  


};
class employee:public person{
   protected:
   int id;
   float salary;
   public:
   void get(){
    
    cout<<"Enter Your EmployeeID is:- "<<'\n';
    cin>>id;
    cout<<"Enter Your Salary:- "<<'\n';
    cin>>salary;
    




   }
   void display(){
    cout<<"*************EMPLOYEE DEATILS BEGINS***************"<<'\n';
    cout<<"Your EmployeeID is:- "<<id<<'\n';
    cout<<"Your Salary is:- "<<salary<<'\n';



   }
};
  class manager:public employee{
    protected:
 string department;
 public:
 void jet(){
    cin.ignore();
   cout<<"Enter Your Department:- "<<'\n';
   getline(cin,department);



 }
 void showcase(){
    cout<<"***********MANAGER DETAILS BEGINS******************"<<'\n';
 cout<<"Your Department is:- "<<department<<'\n';


 }



  }; 





   










int main()
{   manager m1;
    m1.set();
    m1.show();
    m1.get();
    m1.display();
    m1.jet();
    m1.showcase();
    
    return 0;
}
