#include <iostream>

using namespace std;
class A{
    int x;
    public:
    A(){}
    A(int i)
    {
        x=i;
    }
    void operator+(A a)
    {
        int m=x+a.x;
        cout<<"the result of the addition of the two objects is :"<<m<<endl;
    }
};
int main(){
    A a1(5);
    A a2(4);
    a1+a2;
    return 0;   
}