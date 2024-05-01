#include <iostream>

using namespace std;

class Base
{
public:
    void Base_function()
    {
        cout << "This is from base function" << endl;
    }
};
class Derived1 : public Base
{
public:
    void Derived1_function()
    {
        cout << "This is from Derived1 function" << endl;
    }
};
class Derived2 : public Base
{
public:
    void Derived2_function()
    {
        cout << "This is from Derived2 function" << endl;
    }
};
int main()
{
    Derived1 db1;Derived2 db2;
    db1.Base_function();
    db1.Derived1_function();
    db2.Base_function();
    db2.Derived2_function();
    return 0;
}