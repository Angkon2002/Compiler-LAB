#include <iostream>
using namespace std;

int main()
{
    
    int num1 = 10; 

    if (num1 % 2 == 0) 
    {
        cout << "The number is even";
    }
    else
    {
        cout << "The number is odd";
    }

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

bool isOperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '='||)
}

int main()
{
    string input;
    cout << "Enter the num: ";
    getline(cin, input);

    int operatorCount = 0;
    for (char ch : input)
    {
        if (isOperator(ch == main::input
            operatorCount++;
            cout << "Operator " << operatorCount << " : " << ch << endl;
    }


    if (operatorCount == 0)
    {
        cout << "No operators found in the input." << endl;
    }

#include <iostream>

using namespace std;

int main()
{
    int sum1 = 200 + 50;
    int sum2 = sum1 + 250;

    cout << sum1 << endl;
    cout << sum2 << endl;

    return 0;
}

