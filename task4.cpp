#include <iostream>
#include <string>
using namespace std;

bool isIdentifier(string s) {
    if (s.empty())
        return false;


    if (!((s[0] >= 'A' && s[0] <= 'Z') ||
          (s[0] >= 'a' && s[0] <= 'z') ||
           s[0] == '_'))
        return false;

   
    for (int i = 1; i < s.length(); i++) {
        if (!((s[i] >= 'A' && s[i] <= 'Z') ||
              (s[i] >= 'a' && s[i] <= 'z') ||
              (s[i] >= '0' && s[i] <= '9') ||
               s[i] == '_'))
            return false;
    }

    return true;
}

int main() {
    string input;
    cout << "Enter an input: ";
    cin >> input;

    if (isIdentifier(input))
        cout << input << " is a valid Identifier." << endl;
    else
        cout << input << " is NOT a valid Identifier." << endl;

    return 0;
}
