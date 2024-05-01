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
class Derived_base : public Base
{
public:
    void Derived_base_function()
    {
        cout << "This is from Derived base function" << endl;
    }
};
class Derived_derived_base : public Derived_base
{
public:
    void Derived_derived_base_function()
    {
        cout << "This is from Derived derived base" << endl;
    }
};
int main()
{
    Derived_derived_base db;
    db.Base_function();
    db.Derived_base_function();
    db.Derived_derived_base_function();
    return 0;
}