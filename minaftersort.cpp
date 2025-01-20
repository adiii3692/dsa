#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> mergesort(vector<int> &nums){
        if(nums.size()>1){
            vector<int> left = vector<int>(nums.begin(),nums.end()-(nums.size()/2));
            vector<int> right;
            if(nums.size()%2==0){
                right = vector<int>(nums.begin()+(nums.size()/2),nums.end());
            }
            else{
                right = vector<int>(nums.begin()+(nums.size()/2)+1,nums.end());
            }

            mergesort(left);
            mergesort(right);

            int i = 0, j = 0, k = 0;
            while(i<left.size() && j<right.size()){
                if(left[i]<right[j]){
                    nums[k] = left[i];
                    i += 1;
                }
                else{
                    nums[k] = right[j];
                    j += 1;
                }
                k += 1;
            }

            while(i<left.size()){
                nums[k] = left[i];
                i += 1;
                k += 1;
            }

            while(j<right.size()){
                nums[k] = right[j];
                j += 1;
                k += 1;
            }
        }

        return nums;
    }

    int findMin(vector<int> &nums) {
        nums = mergesort(nums);
        return nums[0];
    }
};
