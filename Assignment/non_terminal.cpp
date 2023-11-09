#include <bits/stdc++.h>
using namespace std;

int pos = 0;
class CFG {
public:
    // Production rule A -> aXd
    static string generateA() {
        string str;
        str += "a";
        str += generateX();
        str += "d";
        return str;
    }

    // Production rule X -> bbX
    // Production rule X -> bcX
    // Production rule X -> ε
    static string generateX() {
        string str;
        int choice = rand() % 3;
        if (choice == 0) {
            str += "bb";
            str += generateX();
        } else if (choice == 1) {
            str += "bc";
            str += generateX();
        }
        return str;
    }
};

int main() {

    string generatedString = CFG::generateA();

    // Output the generated string
    cout << "Output: " << generatedString << endl;

    return 0;
}
