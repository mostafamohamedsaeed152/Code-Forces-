#include <iostream>
using namespace std;

int main() {
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    
    long long S, E;
    
    if (l1 > l2) {
        S = l1;
    } else {
        S = l2;
    }
    if (r1 < r2) {
        E = r1;
    } else {
       E = r2;
    }
    if (S <= E) {
        cout << S << " " << E;
    } else {
        cout << -1;
    }
    
    return 0;
}
