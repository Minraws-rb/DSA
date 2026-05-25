#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int A = 0;
        for (auto it = height.begin(); it!=height.end(); ++it) {
            for (auto it2 = it + 1; it2!=height.end(); ++it2) {
                A = max(A, (int)(abs(it-it2)*min(*it,*it2)));
            }
        }
        return A;
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;
    vector<int> height(n);
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }
    cout << obj.maxArea(height) << endl;
    return 0;
}