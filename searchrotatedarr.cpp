#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
       int l = 0, r = nums.size() - 1;
       if (nums.size()==1){
            if(target==nums[0]){
                return 0;
            }
            return -1;
       } 
       if (nums.size()<1){
        return -1;
       }

        if(nums[0])
       while(l<r){
        int mid = (l+r)/2;
        if(nums[mid]>target){
            l = mid + 1;
        }
        else if(nums[mid]<target){
            r = 
        }
       }
    }
};