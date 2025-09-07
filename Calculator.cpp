#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    char choice;
    char op;

    do
    {
        cout << "ENTER THE FIRST VALUE: ";
        cin >> a;
        cout << "ENTER THE OPERATOR: ";
        cin >> op;
        cout << "ENTER THE SECOND VALUE: ";
        cin >> b;
        switch (op)
        {
        case '+':
            cout << "SUM: " << a + b << endl;
            break;
        case '*':
            cout << "MULTIPLICATION: " << a * b << endl;
            break;
        case '/':
            if (b == 0)
            {
                cout << "CONNOT DIVIDED BY ZERO" << endl;
            }
            else
            {
                cout << "DIVISION: " << a / b << endl;
            }
            break;

        case '-':
            cout << "SUBTRACTION: " << a - b << endl;
            break;
        default:
            cout << "invalid operator!" << endl;
        }
        cout << "Do you want another calculation?(y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "calculator closed." << endl;
    return 0;
}
