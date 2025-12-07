#include <iostream>

using namespace std;
 
// 1    

void superHit() {
    int n;
    cin >> n;

    int steps = 0;
    while (n != 0) {

        int L = 0;
        int temp = n;
        while (temp > 0) {
            L++;
            temp >>= 1;
        }

        int rev_n = 0;
        for (int i = 0; i < L; i++) {
            if (n & (1 << i)) {
                rev_n |= (1 << (L - 1 - i));
            }
        }

        n = rev_n - 1;
        steps++;
    }

    cout << steps << endl;
}

// 2 

void bakter() {
    int x;
    cin >> x;
    int count = 0;
    while (x) {
        count += x & 1;
        x >>= 1;
    }
    cout << count << endl;
}

int main() {
    
    superHit();

    return 0;
}