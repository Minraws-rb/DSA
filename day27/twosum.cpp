#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        bool found = false;
        vector<int> v;

        for(auto it = nums.begin(); it != nums.end(); it++){
            for(auto it2 = nums.begin(); it2 != nums.end(); it2++){
                if(it != it2){
                    if(*it + *it2 == target){
                    v.insert(v.begin(),it - nums.begin());
                    v.insert(v.begin(),it2 - nums.begin());
                    found = true;
                }
                }
                if(found == true){
                    break;
                     }
            }
            if(found == true){
                    break;
                     }
        }
        return v;

    }
};

int main() {
    Solution s1;
    vector <int> nums = {1,2,3,7,5,4};
    vector <int> sum;
    int target = 6;
    sum = s1.twoSum(nums, target);
    for(auto it : sum){
        cout<< it<<" ";
    }
    return 0;
}