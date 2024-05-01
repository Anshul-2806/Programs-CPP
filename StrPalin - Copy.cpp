#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class StrPalin
{

public:
    void check(string &str)
    {
        int n = str.length();
        for (int i = 0; i < n / 2; i++)
        {
            if (str[i] != str[n - i - 1])
            {
                cout << "Not palindrome" << endl; 
                exit(0);
            }
        }
        cout << "Palindrome" << endl;
    }
};

int main()
{
    string s;
    StrPalin sp;
    cout << "Enter the word" << endl;
    getline(cin, s);
    sp.check(s);
    return 0;
}
