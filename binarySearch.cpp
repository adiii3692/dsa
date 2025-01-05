#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left  = 0;
        int right = nums.capacity()-1;
        while(left <= right){
            int mid = (left+right)/2;
            
            if (nums.at(mid)>target){
                right = mid - 1;
                continue;
            }
            else if (nums.at(mid) < target){
                left = mid + 1;
                continue;
            }
            else{
                return mid;
            }
        }


        return -1; 
    }
};

