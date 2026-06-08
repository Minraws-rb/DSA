#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0, j = 0;
        int c = 0;
        while(c == 0 || i<haystack.size() ) {
            if(haystack[i] == needle[j]) {
                while(j<needle.size()) {
                    c++;
                    j++;
                }
                if(c == needle.size()){
                   return i;
                }
                else  {
                     c = 0;
                    j = 0;
                }
            }
            i++;
        }     
        return -1;        
    }
};

int main() {
    Solution obj;

    string haystack = "butsad";
    string needle = "sad";

    cout << obj.strStr(haystack, needle) << endl;

    return 0;
}