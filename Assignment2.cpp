#include<iostream>
using namespace std;
class employe
{
    public:
    string name;
    int employid;
    string department;
    int workinghours;
    int salary;
    void input(){
        cout<<"Enter the Name of the Employee: "<<'\n';
        getline(cin,name);
        cout<<"Enter the EmployeeId: "<<'\n';
        cin>>employid;
        cin.ignore();
        cout<<"Enter the Name of the Department: "<<'\n';
        getline(cin,department);
        cout<<"Enter the Workinghours of the Employee: "<<'\n';
        cin>>workinghours;
        cout<<"Enter the Salary of the Employee: "<<'\n';
        cin>>salary;
    




    }

    
    void display(){
        cout<<"************EMPLOYEE DETALIS*************"<<'\n';
        cout<<"The Name of the Employee is: "<<name<<'\n';
       cout<<"The EmployeID of Employee is: "<<employid<<'\n';
       cout<<"The Department of the Employee is: "<<department<<'\n';
       cout<<"The workinghours of the  Employee is: "<<workinghours<<'\n';
       cout<<"The Salary of the Employee is: "<<salary<<'\n';


    }





};




int main()
{
    employe e1;
    e1.input();
    e1.display();
    return 0;
}
