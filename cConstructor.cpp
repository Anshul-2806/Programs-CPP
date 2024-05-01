#include <iostream>
using namespace std;
class cConstructor
{
    int a;

public:
    cConstructor()
    {
        a = 100;
    }
    cConstructor(cConstructor &obj)
    {
        a = obj.a;
    }
    void display()
    {
        cout << "The result is " << a << endl;
    }
};
int main()
{
    cConstructor cc;
    cc.display();
    cConstructor dd(cc);
    dd.display();
    return 0;
}