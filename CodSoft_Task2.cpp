#include <iostream>
using namespace std;

int main()
{
    // Calculator functionality
    double num1;
    double num2;
    double result;
    char op;
    int choice = 1; // Initialize choice to 1

    cout << "Enter 1st number: ";
    cin >> num1;

    result = num1;

    do
    {
        cout << "Enter Operator (+, -, *, /) or any other key to quit: ";
        cin >> op;

        if (op == '+' || op == '-' || op == '*' || op == '/')
        {
            cout << "Enter 2nd number: ";
            cin >> num2;

            // Conditions to check the operator
            switch (op)
            {
            case '+':
                result += num2;
                cout << "Result: " << result << endl;
                break;
            case '-':
                result -= num2;
                cout << "Result: " << result << endl;
                break;
            case '*':
                result *= num2;
                cout << "Result: " << result << endl;
                break;
            case '/':
                if (num2 == 0)
                {
                    cout << "Error: Division by zero" << endl;
                }
                else
                {
                    result /= num2;
                    cout << "Result: " << result << endl;
                }
                break;
            }
        }
        else
        {
            cout << "Invalid Operator" << endl;
            break; // Break the loop if an invalid operator is entered
        }

        cout << "\nEnter 1 to perform another operation or any other number to Quit: ";
        cin >> choice;

    } while (choice == 1);

    cout << "\nThanks for using my calculator" << endl;

    return 0;
}

