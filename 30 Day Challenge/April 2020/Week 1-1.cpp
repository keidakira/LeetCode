#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i += 2) {
            if(nums[i] != nums[i+1])
                return nums[i];
        }
        return nums[nums.size()-1];
    }
};

int main() {
    Solution * s = new Solution();
    vector<int> input;
    // Size of input array
    int n;
    cin >> n;
    // Input each element of an array
    while(n--) {
        int t;
        cin >> t;
        input.push_back(t);
    }
    cout << s->singleNumber(input) << endl;
}