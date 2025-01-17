#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.length() - 1;
        while(l<r){
            if(!isalnum(s[l])){
                l += 1;
                continue;
            }
            if(!isalnum(s[r])){
                r -= 1;
                continue;
            }
            if(tolower(s[l])!=tolower(s[r])){
                return false;
            }
            l += 1;
            r -= 1;
        }
        return true;
    }
};
