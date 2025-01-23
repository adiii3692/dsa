#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
        if(s.length()<1){
            return 0;
        }
        
        if(s.length()==1){
            return int(s[0]);
        }

        int sum{0};
        for(int i{0};i<(s.length()-1);i++){
            if(s[i]==s[i+1]){
                continue;
            }
            sum += abs(s[i+1] - int(s[i]));
        }

        return sum;
    }
};