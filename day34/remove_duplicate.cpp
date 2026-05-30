#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i, n = 0;
        for(i = 0; i< nums.size();i++){
            if(n != nums[i]){
                 n = nums[i];
            } 
            else {
               nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};

int main() {
 Solution obj;

    vector<int> nums = {1, 1, 2, 2, 3, 4, 4};

    int k = obj.removeDuplicates(nums);

    cout << "Number of unique elements: " << k << endl;

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;  
}