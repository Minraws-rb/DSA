#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i, temp = 0;
        int n = nums.size();
        for(i = 0; i< n; i++) {
            if(nums[i] == target){
                break;
            } else if(nums[i]>target){
                break;
            }
        }
        return i;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    int result = obj.searchInsert(nums, target);
    cout << "Position: " << result << endl;
    return 0;
}