#include <iostream>

using namespace std;

class Base1
{
public:
    void Base1_function()
    {
        cout << "This is from base1 function" << endl;
    }
};
class Base2 
{
public:
    void Base2_function()
    {
        cout << "This is from base2 function" << endl;
    }
};
class Derived : public Base1, public Base2
{
public:
    void Derived_function()
    {
        cout << "This is from Derived function" << endl;
    }
};
int main()
{
    Derived db;
    db.Base1_function();
    db.Base2_function();
    db.Derived_function();
    return 0;
}