#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 1;
        int l = 0, r = 1;
        if (s.length()<=1){
            return s.length();
        }

        while(r<s.length()){
            if(s[r]!=s[l]){
                res += 1;                
            }
            else{
                
            }
            r += 1;
        }
    }
};
