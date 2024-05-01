#include <iostream>
#include <string>
using namespace std;

class menu
{
    int a, b, ch;

public:
    void switchCase(int, int, int);
    void display(int);
};

void menu::switchCase(int a, int b, int ch)
{
    switch (ch)
    {
    case 1:
    {
        display(a + b);
        break;
    }
    case 2:
    {
        display(a - b);
        break;
    }
    case 3:
    {
        display(a * b);
        break;
    }
    case 4:
    {
        display(a / b);
        break;
    }
    case 5:
    {
        display(a % b);
        break;
    }

    default:
        cout << "Wrong Input" << endl;
        break;
    }
}

void menu::display(int e)
{
    cout << "Your Answer is " << e << endl;
}

int main()
{
    menu m;
    int x, y, z;
    cout << " Enter 1 to add \n Enter 2 to substract \n Enter 3 to multiply \n Enter 4 to divide \n Enter 5 to modulus \n"<< endl;
    cin >> z;
    cout << "Enter two numbers" << endl;
    cin >> x >> y;
    m.switchCase(x, y, z);
    return 0;
}
