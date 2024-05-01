#include <iostream>
using namespace std;

class biggest
{
    int a, b, c;

public:
    void compare(int, int, int);
    void display(int);
};

void biggest ::compare(int a, int b, int c)
{
    if (a > b && a > c)
    {
        display(a);
    } 
    else if (b > c)
    {
        display(b);
    }
    else
        display(c);
}
void biggest :: display(int e)
{
    cout << "the biggest number is " << e << endl;
}
main()
{
    biggest big;
    int x, y, z;
    cout << "Enter three numbers" << endl;
    cin >> x >> y >> z;
    big.compare(x, y, z);
    return 0;
}
