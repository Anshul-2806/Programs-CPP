#include <iostream>

using namespace std;

class Base
{
    int a;

public:
    int b = 20;
    void get_a(int number)
    {
        a = number;
    }
    int put_a()
    {
        return a;
    }
    
};
class Derive : public Base
{
public:
    int c;
    void mul()
    {
        c = put_a() * b;
        cout << "the answer is " << c << endl;
    }
};
int main()
{
    Derive d;
    d.get_a(10);
    d.mul();
    return 0;
}