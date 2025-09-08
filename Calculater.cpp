#include <iostream>
using namespace std;

int main() {
    int A, B;
    char S;

    cin >> A >> S >> B;

    int R;
    if (S == '+')
        R = A + B;
    else if (S == '-')
        R = A - B;
    else if (S == '*')
        R = A * B;
    else if (S == '/')
        R = A / B; 

    cout << R << endl;
    return 0;
}
