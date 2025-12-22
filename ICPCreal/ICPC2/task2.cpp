#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    string word;
    cin >> word;
    
    if (!word.empty()) {
        word[0] = toupper(word[0]);
    }
    
    cout << word << endl;
    
    return 0;
}