#include <iostream>

using namespace std;

class A
{
public:
    void A_function()
    {
        cout << "This is from base function - A" << endl;
    }
};
class B : public A
{
public:
    void B_function()
    {
        cout << "This is from Derived function - B" << endl;
    }
};
class C : public B
{
public:
    void C_function()
    {
        cout << "This is from Derived function - C" << endl;
    }
};
class D : public B
{
public:
    void D_function()
    {
        cout << "This is from derived function - D" << endl;
    }
};
int main()
{
    D d;
    C c;
    d.A_function();
    d.B_function();
    d.D_function();
    c.A_function();
    c.B_function();
    c.C_function();
    return 0;
}