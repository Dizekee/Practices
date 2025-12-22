#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<long> nums(4);
    for (int i = 0; i < 4; ++i) {
        cin >> nums[i];
    }

    unsigned long sum_all = nums[0] + nums[1] + nums[2] + nums[3];
    unsigned long abc = sum_all / 3;
    
    vector<long> result;
    
    for (int i = 0; i < 4; ++i) {
        if (nums[i] != abc || result.size() == 3) {
            result.push_back(abc - nums[i]);
        }
    }
    
    for (int i = 0; i < 3; ++i) {
        cout << result[i];
        if (i < 2) cout << " ";
    }
    cout << endl;
    
    return 0;
}