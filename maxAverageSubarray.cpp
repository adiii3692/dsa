#include <vector>
#include <iostream>
using namespace std;

class Solution {
    public:
        double findMaxAverage(vector<int>& nums, int k) {
            if (nums.size()<k){
                return 0;
            }

            if (nums.size()==1){
                return 1;
            }

            double maxAverage = INT_MIN;
            double sum = 0;
            for(int i = 0;i<k;i++){
                sum += nums[i];
            }
            maxAverage = max(maxAverage,(sum)/k);

            int l = 0, r = k-1;
            while(r<nums.size()){
                sum -= nums[l];
                r += 1;
                l += 1;
                sum += nums[r];
                maxAverage = max(maxAverage,(sum)/k);
            }

            return maxAverage;
        }
    };