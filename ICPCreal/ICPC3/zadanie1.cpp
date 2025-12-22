#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int count;
    cin >> count;
    
    while (count > 0) {
        string str;
        cin >> str;
        
        if (toupper(str[0]) == 'Y' && 
            toupper(str[1]) == 'E' && 
            toupper(str[2]) == 'S') {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        count--;
    }
    
    return 0;
}