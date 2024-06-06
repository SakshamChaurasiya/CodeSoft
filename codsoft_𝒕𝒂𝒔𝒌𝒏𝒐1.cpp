#include <iostream>
using namespace std;

int main()
{
    char cal;
    float a, b;
    
    cout << "Enter numbers a and b: " << endl;
    cin >> a >> b;
    
    cout << "Enter the operator(+ - / * ): " << endl;
    cin >> cal;

    switch (cal)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;

    case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        break;

    case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;

    case '/':

        cout << a << " / " << b << " = " << a / b << endl;
        break;

    default:
        cout << "Syntax error" << endl;
        break;
    }

    return 0;
}
