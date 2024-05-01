#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec1;
    vector<int>::iterator iter;
    int element;
    char ch = 'Y' || 'y';
    int n, size;
    cout << "Enter the size of the list" << endl;
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
            if (vec1.size() == size)
            {
                cout << "Array is full" << endl;
            }
            else
            {
                cout << "Enter an element to add to this vector: " << endl;
                cin >> element;
                vec1.push_back(element);
            }
            break;
        }

        case 2:
        {
            if (vec1.empty())
            {
                cout << "array is empty" << endl;
            }
            else
            {
                iter = vec1.begin();
                cout << vec1.front();
                vec1.erase(iter);
            }
            break;
        }
        case 3:
        {
            for (int i = 0; i < vec1.size(); i++)
            {
                cout << vec1[i] << " ";
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