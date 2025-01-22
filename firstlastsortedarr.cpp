#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> solution = {-1,-1};

        int l = 0, r = nums.size() - 1;
        while(l<=r){
            int mid = (l+r)/2;
            if (nums[mid]<target){
                l = mid + 1;
            }
            else if (nums[mid] > target){
                r = mid - 1;
            }
            else{
                //check the previous and next element if found
                if(nums.size()==1){
                    if(target==nums[0]){
                        return {0,0};
                    }
                }
                if(mid == (nums.size() - 1)){
                    if(nums[mid-1]==target){
                        solution[0] = mid - 1;
                    }
                    else{
                        solution[0] = mid;
                    }
                    solution[1] = mid;
                    break;
                }
                else if(mid == 0){
                    solution[0] = 0;
                    if(nums[1] == target){
                        solution[1] = 1;
                    }
                    else{
                        solution[1] = 0;
                    }
                    break;
                }
                else if(nums[mid] == nums[mid+1]){
                    solution[0] = mid;
                    solution[1] = mid + 1;
                    break;
                }
                else if(nums[mid] == nums[mid-1]){
                    solution[0] = mid - 1;
                    solution[1] = mid;
                    break;
                }
                else{
                    solution[0] = mid;
                    solution[1] = mid;
                    break;
                }
            }
        }

        return solution;
    }
};