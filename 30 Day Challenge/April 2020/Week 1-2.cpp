#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

class Solution {
public:
    
    int getHappy(int n) {
        int s = 0;
        while(n != 0) {
            int m = n % 10;
            s += (m*m);
            n /= 10;
        }
        return s;
    }
    
    bool isHappy(int n) {
        vector<int> t;
        vector<int>::iterator it;
        t.push_back(n);
        while(n != 1) {
            n = this->getHappy(n);
            it = find(t.begin(), t.end(), n);
            if(it != t.end()) {
                return false;
            } else {
                t.push_back(n);
            }
        }
        return true;
    }
    
};

int main() {
    Solution * s = new Solution();
    // Size of input array
    int n;
    cin >> n;
    cout << s->isHappy(n) << endl;
}