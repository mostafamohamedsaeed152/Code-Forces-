#include <iostream>
using namespace std;

int main() {
    int password;
    int correctPassword = 1999;

    for (;;) {
        cin >> password;
        if (password == correctPassword) {
            cout << "Correct" << endl;
            break; 
        }
        else {
            cout << "Wrong" << endl;
        }
    }

    return 0;
}
