#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    string st;
    ifstream in;
    in.open("input sjupiter.txt");
    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    return 0;
}
