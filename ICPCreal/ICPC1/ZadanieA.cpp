#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int num;
    int reversNum = 0;
    int result = 0;
    
    cin >> num;
    
    while(num > 0) {
        if (num % 2 == 1) {
            reversNum *= 10;
            reversNum++;
        } else {
            reversNum *= 10;
        }
        num /= 2;
    }
    
    while(reversNum > 0) {
        if (reversNum % 2 == 1) {
            result++;
        }
        reversNum /= 10;
    }
    
    cout << result << endl;
    
    return 0;
}