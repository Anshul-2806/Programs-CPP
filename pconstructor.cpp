#include <iostream>
using namespace std;
class area
{
    int l, b;

public:
    area (int x, int y)
    {
        l = x;
        b = y;
    }
    int calculate();
};

int area::calculate()
{
    return l * b;
}
int main()
{
    int a, b;
    cout << "Enter the length and breadth" << endl;
    cin >> a >> b;
    area A1(a, b);
    cout << "the area is " << A1.calculate() << endl;
    return 0;
}
