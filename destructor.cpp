#include <iostream>
using namespace std;
class destructor
{
private:
    static int count;

public:
    destructor();
    ~destructor();
};

destructor::destructor()
{
    count += 1;
    cout << "Constructor is invoked for d" << count << endl;
}

destructor::~destructor()
{
    cout << "Destructor is invoked for d" << count << endl;
    count -= 1;
}
int destructor::count;
int main()
{
    cout << "In the main block " << endl;
    cout << "Entering new block d1 " << endl;
    destructor d1;
    {
        cout << "In the block d1 " << endl;
        destructor d2;
        destructor d3;
        cout << "Existing block " << endl;
    }
    return 0;
}
