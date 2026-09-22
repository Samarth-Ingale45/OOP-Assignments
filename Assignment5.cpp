#include<iostream>
using namespace std;
class student{
    public:
int id;
string name;
int rollno;
int marks;
student(int id,string name,int rollno,int marks){
    this->id=id;
    this->name=name;
    this->rollno=rollno;
    this->marks=marks;
}
void display(){
    cout<<"************STUDENT ADMISSION DETAILS**********"<<'\n';
     cout<<"Your StudentID is: "<<id<<'\n';
     cout<<"Your Full Name is: "<<name<<'\n';
     cout<<"Your RollNo is: "<<rollno<<'\n';
     cout<<"Your Obtained Marks are: "<<marks<<'\n';
}


};




int main()
{
    student s1(101,"Samarth Ingale",18,90);
    s1.display();
    
    return 0;
}
