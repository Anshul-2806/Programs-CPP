#include <iostream>
#include <cmath>
using namespace std;
class sampleProgram
{
    int x, y;

public:
    sampleProgram(int, int);
    friend void calculate(sampleProgram, sampleProgram);
};

sampleProgram::sampleProgram(int m, int n)
{
    x = m;
    y = n;
}
void calculate(sampleProgram o1, sampleProgram o2)
{
    int distance;
    distance = sqrt(pow((o2.x - o1.x), 2) + pow((o2.y - o1.y), 2));
    cout << "The distance is " << distance;
}
int main()
{
    int a, b, c, d;
    cout << "Enter the first two number " << endl;
    cin >> a >> b;
    sampleProgram sp1(a, b);
    cout << "Enter the second two number " << endl;
    cin >> c >> d;
    sampleProgram sp2(c, d);
    calculate(sp1, sp2);
    return 0;
}
