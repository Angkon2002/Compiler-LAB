#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main() {
    cout << "=== Token Classification Program ===" << endl;

    vector<string> keywords = {
        "int", "float", "if", "else", "while", "for",
        "return", "char", "double", "void"
    };

    vector<string> operators = {
        "+", "-", "*", "/", "=", "==", "<", "<=", ">", ">=", "!="
    };

    
    ifstream file("tokens.txt");

    if (!file.is_open()) {
        cerr << "Error: Could not open tokens.txt file!" << endl;
        return 1;
    }

    string word;
    while (file >> word) {
        bool matched = false;

        
        for (const string &kw : keywords) {
            if (word == kw) {
                cout << word << " : Keyword" << endl;
                matched = true;
                break;
            }
        }
        if (matched) continue;


        for (const string &op : operators) {
            if (word == op) {
                cout << word << " : Operator" << endl;
                matched = true;
                break;
            }
        }
        if (matched) continue;

        
        if (isdigit(word[0]) || (word.front() == '"' && word.back() == '"')) {
            cout << word << " : Literal" << endl;
            continue;
        }

        
        cout << word << " : Identifier" << endl;
    }

    file.close();
    return 0;
}
