#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> mergesort(vector<int>&nums){
        if(nums.size()>1){
            vector<int> left = std::vector<int>(nums.begin(),nums.end()-(nums.size()/2));
            vector<int> right;
            if(nums.size()%2==0){
                right = std::vector<int>(nums.begin()+(nums.size()/2), nums.end());
            }
            else{
                right = std::vector<int>(nums.begin()+(nums.size()/2)+1, nums.end());
            }

            mergesort(left);
            mergesort(right);

            int i{0},j{0},k{0};

            while((i<left.size()) && (j<right.size())){
                if(left.at(i)<right.at(j)){
                    nums.at(k) = left.at(i);
                    i += 1;
                }
                else{
                    nums.at(k) = right.at(j);
                    j += 1;
                }
                k += 1;
            }

            while(i<left.size()){
                nums.at(k) = left.at(i);
                i += 1;
                k += 1;
            }

            while(j<right.size()){
                nums.at(k) = right.at(j);
                j += 1;
                k += 1;
            }
        }

        return nums;
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        nums = mergesort(nums);
        vector<int> sol{};
        for(int i{0};i<nums.size();i++){
            if(nums.at(i)==target){
                sol.push_back(i);
            }
            if(nums.at(i)>target){
                break;
            }
        }

        // for(int i{0};i<sol.size();i++){
        //     cout<<"Element at "<<i<<" = "<<sol.at(i)<<endl;
        // }
        return sol;
    }
};

int main(){
    Solution s = Solution();
    vector<int> nums{1,4,2,8,4,6,3,2};
    s.targetIndices(nums,2);
}