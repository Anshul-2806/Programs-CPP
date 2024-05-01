#include <iostream>

using namespace std;

template <class t1 = int, class t2 = float>
class temp
{
    t1 a;
    t2 b;

public:
    temp(t1 x, t2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout <<a<<endl;
        cout <<b<<endl;
    }
};
int main()
{
    temp<> obj(1, 1.2);
    obj.display();
    return 0;
}