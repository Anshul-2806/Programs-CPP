#include <iostream>
using namespace std;
class foverload
{
public:
    void calculate(int);
    void calculate(double, int);
    void calculate(int, int, int);
};
void foverload::calculate(int s)
{
    cout << "the volume of cube " << s * s * s;
}
void foverload::calculate(double r, int h)
{
    cout << "the volume of cone " << 3.14 * r * r * h;
}
void foverload::calculate(int l, int b, int h)
{
    cout << "the volume of cuboid " << l * b * h;
}

int main()
{
    int x, y, z, c;
    double d;
    foverload fo;
    cout << "You can calculate the volume of cube / cone / cuboid" << endl
         << "1 for cube \n 2 for cone \n 3 for cuboid \n Enter your choice " << endl;
    cin >> c;
    if (c == 1)
    {
        cout << "Enter the side" << endl;
        cin >> x;
        fo.calculate(x);
    }
    else if (c == 2)
    {
        cout << "Enter the radius" << endl;
        cin >> d;
        cout << "Enter the height" << endl;
        cin >> y;
        fo.calculate(x, y);
    }
    else if (c == 3)
    {
        cout << "Enter the lenght " << endl;
        cin >> x;
        cout << "Enter the breadth " << endl;
        cin >> y;
        cout << "Enter the heigth " << endl;
        cin >> z;
        fo.calculate(x, y, z);
    }
    else
        cout << "Wrong input";
    return 0;
}
