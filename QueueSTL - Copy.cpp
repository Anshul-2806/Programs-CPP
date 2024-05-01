#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    vector<int>::iterator iter;
    char ch;
    int n, size, flag = 0, element;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    do
    {
        cout << "\n 1. Insertion in queue ";
        cout << "\n 2. Deletion in queue";
        cout << "\n 3. Display";
        cout << "\n Enter your choice";
        cin >> n;
        switch (n)
        {
        case 1:
        {
            if ((vec.size() == size) || (flag == 1))
            {
                cout << "Array is full" << endl;
            }
            else
            {
                cout << "Enter an element to add to this vector: " << endl;
                cin >> element;
                vec.push_back(element);
                if (vec.size() == 4)
                {
                    flag = 1;
                }
            }
            break;
        }
        case 2:
        {
            if (vec.empty())
            {
                cout << "array is empty" << endl;
            }
            else
            {
                iter = vec.begin();
                cout << vec.front();
                vec.erase(iter);
            }
            break;
        }
        case 3:
        {
            for (int i = 0; i < vec.size(); i++)
            {
                cout << vec[i] << " ";
            }
            cout << endl;
            break;
        }
        default:
            cout << "\n User has given wrong number" << endl;
        }
        cout << "\n Do you want to continue ? :- " << endl;
        fflush(stdin);
        cin >> ch;
    } while ((ch == 'y') || (ch == 'Y'));
    return 0;
}