#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Factorial
{

public:
    long Fact(long);
};

long Factorial::Fact(long a)
{
    if (a <= 1)
    {
        return 1;
    }
    else
    {
        return a * Fact(a - 1);
    }
}
int main()
{
    long n;
    Factorial facto;
    cout << "Enter a number" << endl;
    cin >> n;
    n = facto.Fact(n);
    cout << "The factorial is " << n << endl;
    return 0;
}
