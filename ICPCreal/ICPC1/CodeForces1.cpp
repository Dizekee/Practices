#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int num;
    int count = 0;
    
    cin >> num;
    
    while(num > 0) {
        if (num % 2 == 1) {
            count++;
        }
        num /= 2;
    }
    
    cout << count << endl;
    
    return 0;
}