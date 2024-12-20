#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int binarySearch(vector<int>& nums, int target) {
        std::size_t capacity{nums.size()};
        std::size_t left{0};
        std::size_t right{capacity-1};
        
        while(left<=right && right<capacity){
            int mid = (left+right)/2;

            if (nums[mid]<target){
                left = mid+1;
                continue;
            }
            else if (nums[mid]>target){
                right = mid-1;
                continue;
            }
            else{
                return mid;
            }
        }

        return capacity;
    }
};

int main(){
    Solution *sol = new Solution{};
    vector<int> nums{3,4,5,6,7,8,9};
    int target = 6;
    int searchResult = sol->binarySearch(nums,target);

    cout<<"Number "<<target<<" is at index: "<<searchResult<<endl;
};