#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while(l < r){
            //Get the mid element
            int mid = (l+r)/2;

            //Check whether the pattern follows
            if (mid%2==0){
                //If even, check the next element
                if (nums[mid]==nums[mid+1]){
                    l = mid + 1;
                    continue;
                }
                else{
                    //If not equal, the single element is in the left half
                    r = mid;
                    continue;
                }
            }
            else{
                //If not even check the previous element
                if (nums[mid]==nums[mid-1]){
                    l = mid + 1;
                    continue;
                }
                else{
                    r = mid;
                    continue;
                }
            }
        }

        return nums[l];
    }
};

int main(){
    Solution s = Solution();
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    cout<<s.singleNonDuplicate(nums)<<endl;
}