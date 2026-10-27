#include<iostream>
using  namespace std;
class result{
  public:
  int m1;
  int m2;
  int m3;
  float  m4;
  float m5;
  void averagemarks(int m1,int m2){
    cout<<"The Average Marks are:- "<<(m1+m2)/2.0<<'\n';


  }
  void averagemarks(int m1,int m2,int m3){
    cout<<"The Average Marks are:- "<<(m2+m3+m1)/3.0<<'\n';


  }
  void averagemarks(float m4,float m5 ){
    cout<<"The Average Marks are:- "<<(m4+m5)/2.0<<'\n';


  }



};



int main()
{   result r;
    r.averagemarks(10,20);
    r.averagemarks(30,12);
    r.averagemarks(10.78f,20.23f);
    
    return 0;
}
