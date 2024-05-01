#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    vector<int>::iterator iter;
    char ch;
    int n, element, size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    do
    {
        cout << "\n Operation of Double Ended Queue";
        cout << "\n 1. Insertion from front end in Double Ended Queue ";
        cout << "\n 2. Insertion from Rear end in Double Ended Queue ";
        cout << "\n 3. Deletion from front end in Double Ended Queue ";
        cout << "\n 4. Deletion from rear end in Double Ended Queue ";
        cout << "\n 5. Display";
        cout << "\n Enter your choice";
        cin >> n;
        switch (n)
        {
        case 1:
        {
            if ((vec.size() == size))
            {
                cout << "Array is full" << endl;
            }
            else
            {
                cout << "Enter an element to add to this vector: " << endl;
                cin >> element;
                iter = vec.begin();
                vec.insert(iter, element);
            }
            break;
        }
        case 2:
        {
            if ((vec.size() == size))
            {
                cout << "Array is full" << endl;
            }
            else
            {
                cout << "Enter an element to add to this vector: " << endl;
                cin >> element;
                vec.push_back(element);
            }
            break;
        }
        case 3:
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
        case 4:
        {
            if (vec.empty())
            {
                cout << "array is empty" << endl;
            }
            else
            {
                cout << vec.back();
                vec.pop_back();
            }
            break;
        }
        case 5:
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