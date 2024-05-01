#include <iostream>
#include <string>
using namespace std;

class Special
{
public:
    int x;
    void read();
    int factorial(int x);
    bool isSpecial();
    void display();
};
void Special ::read()
{
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    factorial(n);
}
int Special ::factorial(int x)
{
    if (x < 2)
    {
        return 1;
    } 
    else
        return x * factorial(x - 1);
}
void Special :: display(){
cout<<factorial(x)<<endl;
} 
int main()
{
    int x;
    Special s;
    s.read();
    s.factorial(x);
    s.isSpecial();
    s.display();

    return 0;
}
