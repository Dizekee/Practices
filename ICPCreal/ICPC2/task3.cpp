#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int older, junior;
    cin >> older >> junior;
    
    int years = 0;
    while (older <= junior) {
        older *= 3;
        junior *= 2;
        years++;
    }
    
    cout << years << endl;
    
    return 0;
}