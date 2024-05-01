#include <iostream>

using namespace std;
class base
{
public:
    void show()
    {
        cout << "show base function" << endl;
    }
    virtual void print()
    {
        cout << "Print base function" << endl;
    }
};
class derived : public base
{
public:
    void show()
    {
        cout << "show derived class " << endl;
    }
    void print()
    {
        cout << "print derived class " << endl;
    }
};
int main()
{
    base *bptr;
    derived d;
    bptr = &d;
    bptr->print();
    bptr->show();
    return 0;
}