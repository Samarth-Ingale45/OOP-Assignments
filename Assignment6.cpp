#include<iostream>
using namespace std;
class employee{
    public:
int id;
string name;
float salary;
employee(int i,string n,float s){
    id=i;
    name=n;
    salary=s;
    cout<<"CONSTRUCTOR IS CALLED"<<'\n';



}
~employee(){
    cout<<"DESTRUCTOR IS CALLED"<<'\n';



}
void display(){
     cout<<"Your EmployeeID is:- "<<id<<'\n';
     cout<<"Your Name is:- "<<name<<'\n';
     cout<<"Your Salary is:- "<<salary<<'\n';



}




};




int main()
{ employee e1(100,"Rahul",100.78);
  employee e2(101,"Sam",1900.90);
    e1.display();
    e2.display();
    

    
    return 0;
}



