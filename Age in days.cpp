#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int years = N / 365;
    int Rdays = N % 365;
    int months = Rdays / 30;
    int days = Rdays % 30;
    
    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;
    
    return 0;
}
