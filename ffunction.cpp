#include <iostream>

using namespace std;
class ffunction
{
    int a, b;

public:
    void setNumber(int i, int j)
    {
        a = i;
        b = j;
    }
    friend ffunction sumNumber(ffunction f1, ffunction f2);
    void printNumber()
    {
        cout << a << " + " << b << " i" << endl;
    }
};
ffunction sumNumber(ffunction f1, ffunction f2)
{
    ffunction f3;
    f3.setNumber((f1.a + f2.a), (f1.b + f2.b));
    return f3;
}
int main()
{
    ffunction f1, f2, f3;
    f1.setNumber(1, 4);
    f1.printNumber();

    f2.setNumber(2, 3);
    f2.printNumber();

    f3 = sumNumber(f1, f2);
    f3.printNumber();

    return 0;
}
