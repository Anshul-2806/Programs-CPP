#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Fibbonaci
{
    int p = 0, q = 1;

public:
    void Fibbo(int);
};
void Fibbonaci::Fibbo(int a)
{
    int temp = 0;
    for (int i = 0; i < a - 2; i++)
    {
        temp = p + q;
        cout << temp << ", ";
        p = q;
        q = temp;
    }
}
int main()
{
    int n;
    Fibbonaci fib;
    cout << "Enter the length of the rows " << endl;
    cin >> n;
    cout << "0, 1, ";
    fib.Fibbo(n);
    return 0;
}
