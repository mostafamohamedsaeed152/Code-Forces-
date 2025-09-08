#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long max = -1;
    
    for (int i = 0; i < n; i++) {
        long long num;
        cin >> num;
        if (num > max) {
            max = num;
        }
    }
    
    cout << max << endl;
    
    return 0;
}