#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int minimum = A;
    int maximum = A;

    if (B < minimum)
    { minimum = B;
    }
    if (C < minimum)  
    {
    minimum = C;
    }

    if (B > maximum)
    { maximum = B;
    }
    if (C > maximum) 
    {
    maximum = C;
    }

    cout << minimum << " " << maximum << endl;

    return 0;
}