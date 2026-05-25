#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int A=0;
        int n = height.size()-1;
        int i = 0;
        while(i<n){
            int area = (n-i) * min(height[i], height[n]);
            A = max(A, area);
            if(height[i]>height[n]){
                n--;
            }
            else i++;
            }
            return A;
          }
};

int main() {
    int n;
    cin >> n;

    vector<int> height(n);

    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    Solution obj;
    cout << obj.maxArea(height) << endl;

    return 0;
}