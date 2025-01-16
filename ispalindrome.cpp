#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int l{0},r{s.size()-1};
        while(l<=r){
            if(!isalnum(s.at(l))){
                s += 1;
            }
        }
    }
};
