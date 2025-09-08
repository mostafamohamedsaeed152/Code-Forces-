#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int ctE = 0, ctO = 0, ctP = 0, ctN = 0;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        
        if (num % 2 == 0) {
            ctE++;
        } else {
            ctO++;
        }
        
        if (num > 0) {
            ctP++;
        } else if (num < 0) {
            ctN++;
        }
    }
    
    cout << "Even: " << ctE << endl;
    cout << "Odd: " << ctO << endl;
    cout << "Positive: " << ctP << endl;
    cout << "Negative: " << ctN << endl;
    
    return 0;
}