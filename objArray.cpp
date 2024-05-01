#include <iostream>
using namespace std;

class objArray
{
    int id;
    static int count;

public:
    void setData();
    void putData();
};
void objArray::setData()
{
    cout << "Enter the id of the employee " << endl;
    cin >> id;
    count++;
}
void objArray::putData()
{
    cout << "The id of the employee is " << id << endl
         << " and the count is " << count << endl;
}
int objArray::count;
int main()
{
    int n;
    cout << "Enter the number of objects " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        objArray ob[i];
        ob[i].setData();
        ob[i].putData();
    }
    return 0;
}
