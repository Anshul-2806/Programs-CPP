#include <iostream>

using namespace std;

class Base
{
public:
    void Base1_function()
    {
        cout << "This is from base function" << endl;
    }
};
class Derived1_Base : virtual public Base
{
public:
    void Derived1_Base_function()
    {
        cout << "This is from Derived1_Base function" << endl;
    }
};
class Derived2_Base : virtual public Base
{
public:
    void Derived2_Base_function()
    {
        cout << "This is from Derived2_Base function" << endl;
    }
};
class Derived : public Derived1_Base, public Derived2_Base
{
public:
    void Derived_function()
    {
        cout << "This is from derived function" << endl;
    }
};
int main()
{
    Derived d; Base b;
    d.Base1_function();
    d.Derived1_Base_function();
    d.Derived2_Base_function();
    d.Derived_function();
    return 0;
}