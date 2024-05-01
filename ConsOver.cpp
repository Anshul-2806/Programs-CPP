#include <iostream>
using namespace std;
class ConsOver
{
    int a;

public:
    ConsOver()
    {
        a = 100;
        display(a);
        cout << "This is from default constructor" << endl;
    }
    ConsOver(int b)
    {
        a = b;
        display(a);
        cout << "This one is from parameterized constructor" << endl;
    }
    ConsOver(ConsOver &obj)
    {
        a = obj.a;
        display(a);
        cout << "This one is from copy constructor" << endl;
    }
    void display(int c)
    {
        cout << "The answer is " << c << "\t";
    }
};
int main()
{
    ConsOver aa, bb(100), cc(aa);
    return 0;
}
