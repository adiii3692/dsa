#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg{0},pos{0};
        for(int i{0};i<nums.size();i++){
            if(nums.at(i)>0){
                pos += 1;
            }
            else if(nums.at(i)<0){
                neg += 1;
            }
        }

        if(pos>neg){
            return pos;
        }

        return neg;
    }
};