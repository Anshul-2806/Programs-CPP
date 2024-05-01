#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class infamous
{
    int a, b, c, d, e;

public:
    int check(int);
    void odd(int);
    void even(int);
    void display(void);
};
void infamous ::odd(int b)
{
    a = 3 * b + 1;
    cout << a <<" ";
    check(a);
}
void infamous ::even(int c)
{
    d = c / 2;
    cout << d << " ";
    check(d);
}
int infamous ::check(int e)
{
    if (e == 4 || e == 2 || e == 1)
    {
        cout << "loop" << endl;
    }
    else
    {
        if (e % 2 == 0)
        {
            even(e);
        }
        else
        {
            odd(e);
        }
    }
}
int main()
{
    infamous in;
    int n;
    cout << "Enter the range" << endl;
    cin >> n; 
    for (int i = 10; i < n; i++)
    {
        cout << i<< " - "; 
        in.check(i);
    }

    return 0;
}
