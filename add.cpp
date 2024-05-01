#include <iostream>
using namespace std;

class add
{
    int a, b;

public:
    void addition(void)
    {
        cout << "Enter two numbers" << endl;
        cin >> a >> b;
        cout << a + b<<endl;
    }
};

int main()
{
    add ad;
    ad.addition();
    return 0;
}
