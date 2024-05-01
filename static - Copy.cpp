#include<iostream>
using namespace std;

class stack
{
    int id;
    static int count;
public:
  void getData();
  void setData();  
};
void stack::setData(){
    cout<<"Enter the id of the employee"<<endl;
    cin>>id;
    count++;
}
void stack::getData()
{
    cout<<"the id of the employee is "<<id<<" and the count is "<<count<<endl;
}
int stack :: count;
int main()
{
    stack s1,s2,s3;
    s1.setData();
    s1.getData();
    s2.setData();
    s2.getData();
    s3.setData();
    s3.getData();
    return 0;
}
