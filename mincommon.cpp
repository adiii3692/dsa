#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int binarySearch(vector<int>& nums, int target){
        int l{0},r{static_cast<int>(nums.size()-1)};
        while(l <= r){
            int mid = (l+r)/2;
            if (nums.at(mid)>target){
                r = mid - 1;
            }
            else if (nums.at(mid)<target){
                l = mid + 1;
            }
            else{
                return mid;
            }
        }

        return -1;
    }

    int findVal(vector<int>& nums1, vector<int>& nums2){
        //Go through nums 1 and find common vals in num2
        for(int i{0};i<nums1.size();i++){
            if(binarySearch(nums2,nums1.at(i))!=-1){
                return nums1.at(i);
            }
        }

        return -1;
    }

    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size()<nums2.size()){
            return findVal(nums1,nums2);
        }
        else if (nums2.size()<nums1.size()){
            return findVal(nums2,nums1);
        }
        return findVal(nums1,nums2);
    }
};

int main(){

}