#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class account
{
public:
    double balance[2] = {1000.00,1000.00};
    string name = "Mr. Name";
    long acct_number = 1000023450;
    void display(int bal)
    {
        cout << "The balance is " << balance[bal] << endl;
    }
};
class sav_acct : public account
{
public:
    int time = 1;
    double rate = 0.5;
    void update(double up)
    {
        balance[0] += up;
        compound();
    }
    void compound()
    {
        balance[0] *= pow((1 + (rate / 100)), time++);
    }
    void withdrawl(double amount)
    {
        balance[0] -= amount;
        display(0);
        compound();
    }
};
class cur_acct : public account
{
public:
    double minimum = 100.00, penalty = 36.00;
    void update(double up)
    {
        balance[1] += up;
    }
    void check_balance()
    {
        if (balance[1] < 100.00)
        {
            balance[1] -= penalty;
            cout << "Your account is debited with " << penalty << " for ERTLB" << endl
                 << "Your current balance is " << balance[1] << endl;
        }
    }
    void withdrawl(double amount)
    {
        balance[1] -= amount;
        display(1);
    }
};
int main()
{
    char ch = 'Y' || 'y';
    int a, b;
    double deposit, wid;
    cur_acct ca;
    sav_acct sa;
    do
    {
        cout << "press 1 to deposite" << endl
             << "press 2 to withdrawl" << endl
             << "press 3 to check balance" << endl;
        cin >> b;
        if (b == 1)
        {
            cout << "press 1 for Savings account" << endl
                 << "Press 2 for current account" << endl;
            cin >> a;
            if (a == 1)
            {
                cout << "enter the amount to be deposited " << endl;
                cin >> deposit;
                sa.update(deposit);
            }
            else if (a == 2)
            {
                cout << "enter the amount to be deposited " << endl;
                cin >> deposit;
                ca.update(deposit);
            }
        }
        else if (b == 2)
        {
            cout << "press 1 for Savings account" << endl
                 << "Press 2 for current account" << endl;
            cin >> a;
            if (a == 1)
            {
                cout << "Enter the amount to be withdrawl" << endl;
                cin >> wid;
                sa.withdrawl(wid);
            }
            else if (a == 2)
            {
                cout << "Enter the amount to be withdrawl" << endl;
                cin >> wid;
                ca.withdrawl(wid);
            }
            else
            {
                exit(0);
            }
        }
        else if (b == 3)
        {
            cout << "press 1 for Savings account" << endl
                 << "Press 2 for current account" << endl;
            cin >> a;
            if (a == 1)
            {
                cout<<sa.name<<endl;
                cout<<sa.acct_number<<endl;
                sa.display(0);
            }
            else if (a == 2)
            {

                cout<<ca.name<<endl;
                cout<<ca.acct_number<<endl;
                ca.display(1);
            }
            else
            {
                exit(0);
            }
        }
        cout << "Do you ant to continue :-" << endl;
        fflush(stdin);
        cin >> ch;
    } while ((ch == 'Y') || (ch == 'y'));

    return 0;
}