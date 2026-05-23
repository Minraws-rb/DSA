#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> v;
        v = nums;
        sort(v.begin(), v.end());

        for(int i = 0; i< nums.size(); i++) {
            if(v == nums) return true;
            rotate(v.begin(), v.begin()+1, v.end());
        }
        return false;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {3, 4, 5, 1, 2};
    if(obj.check(nums)) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}