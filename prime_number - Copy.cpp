#include <iostream>
#include <string>
using namespace std;

class prime_number
{
    int i, j, count, no=0;

public:
    void chk_prime(int);
};
void prime_number ::chk_prime(int n)
{
    for (j = 2; j < n; j++)
    {
        count = 0;
        for (i = 1; i < j; i++)
        {
            if (j % i == 0)
            {
                count++;
            }
        }
        if (count == 1)
        {
            no++;
            cout << "prime number " << j << endl;
        }
        else
        {
            cout << "Not a prime number " << j << endl;
        }
    }
            cout<<"Number of prime numbers "<<no<<endl;
}
main()
{
    int a;
    prime_number p;
    cout << "enter range " << endl;
    cin >> a;
    p.chk_prime(a);
    return 0;
}
