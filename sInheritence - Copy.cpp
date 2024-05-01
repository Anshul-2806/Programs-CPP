#include<iostream>

using namespace std;
// class employee
// {
// private:
//     float x = 1000;
// public:
//     float salary = 5000;
// };
// class salary1:public employee{
//     public:
//     float bonus = 2000;
// };
// int main()
// {
//     salary1 obj;
//     cout<<obj.bonus<<endl;
//     cout<<obj.salary<<endl;
//     return 0;
// }
class employee
{
private:
    int d;
public:
float salary;
employee(int inpId) {
    d=inpId;
    salary = 5000.00;
} 
  
};
int main()
{
    employee e1(1),e2(2);
    cout<<e1.salary<<endl;
    cout<<e2.salary<<endl;
    return 0;
}
