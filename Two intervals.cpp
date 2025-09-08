#include <iostream>
using namespace std;

int main() {
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    
    long long start, end;
    
    if (l1 > l2) {
        start = l1;
    } else {
        start = l2;
    }
    if (r1 < r2) {
        end = r1;
    } else {
        end = r2;
    }
    if (start <= end) {
        cout << start << " " << end;
    } else {
        cout << -1;
    }
    
    return 0;
}