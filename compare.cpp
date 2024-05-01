#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class compare
{

public:
    void comp(int a, int b, int c)
    {
        if (a > b)
        {
            if (a > c)
            {
                cout << "first one is grettest" << endl;
            }
            else
                cout << "third one is grettest" << endl;
        }
        else if (b > c)
        {
            cout << "second one is grettest" << endl;
        }
    }
};

int main()
{
    int x, y, z;
    cout << "Enter three number" << endl;
    cin >> x >> y >> z;
    compare c;
    c.comp(x, y, z);
    return 0;
}
