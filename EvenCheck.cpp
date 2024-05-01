#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Even_Check
{
    int a;

public:
    void Check_Number(int);
};

void Even_Check::Check_Number(int a)
{
    if (a % 2 == 0)
    {
        cout << "Even number" << a << endl;
    }
    else
        cout << "Odd number" << a << endl;
}

int main()
{
    int n;
    Even_Check even;
    cout << "Enter a number" << endl;
    cin >> n;
    even.Check_Number(n);
    return 0;
}
