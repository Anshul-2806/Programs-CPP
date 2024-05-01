#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> list1;
    list<int>::iterator it;
    int element, place, choice;
    char ch = 'y' || 'Y';
    do
    {
        cout << "\n Operation on Linked List";
        cout << "\n 1. Insertion at beginning of Linked List";
        cout << "\n 2. Insertion at Middle Of Linked List";
        cout << "\n 3. Insertion at End Of Linked List";
        cout << "\n 4. Display";
        cout << "\n 5. Count number of nodes";
        cout << "\n 6. Deletion of specified node ";
        cout << "\n 7. Deletion at the beginning ";
        cout << "\n 8. Deletion at the end ";
        cout << "\n Enter your choice";

        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "Enter the element" << endl;
            cin >> element;
            list1.push_front(element);
            break;
        }
        case 2:
        {
            if (list1.size() == 1)
            {
                cout << "Enter two elements at first!!!!!" << endl;
            }
            else
            {
                cout << "Enter the place you want to enter the element" << endl;
                cin >> place;
                cout << "Enter the element" << endl;
                cin >> element;
                
                it = list1.begin();
                advance(it, place - 1);
                list1.insert(it, element);
            }
            break;
        }
        case 3:
        {
            cout << "Enter the element" << endl;
            cin >> element;
            list1.push_back(element);
            break;
        }
        case 4:
        {
            for (it = list1.begin(); it != list1.end(); it++)
            {
                cout << *it << " ";
            }
            break;
        }
        case 5:
        {
            cout << "The size is " << list1.size() << endl;
            break;
        }
        case 6:
        {
            if (list1.empty())
            {
                cout << "list is empty" << endl;
            }
            else
            {
                cout << "Enter the element you want to remove" << endl;
                cin >> element;
                list1.remove(element);
            }
            break;
        }
        case 7:
        {
            if (list1.size() == 0)
            {
                cout << "List is empty" << endl;
            }
            else
            {
                cout << list1.front();
                list1.pop_front();
            }
            break;
        }
        case 8:
        {
            if (list1.size() == 0)
            {
                cout << "List is empty" << endl;
            }
            else
            {
                cout << list1.back();
                list1.pop_back();
            }
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