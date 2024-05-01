#include <iostream>
using namespace std;

class average
{
    int a, b, c;

public:
    void avg()
    {
        cout << "Enter three numbers" << endl;
        cin >> a >> b >> c;
        display((a + b + c) / 3);
    }
    void display(int dis)
    {
        cout << "the answer is " << dis;
    }
};

int main()
{
    average average;
    average.avg();
    return 0;
}