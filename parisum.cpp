class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int counter = 0;
        if (nums.size()<=1){
            return counter;
        }

        for(int j{0};j<nums.size()-1;j++){
            for(int i{j+1};i<nums.size();i++){
                if (nums[i] + nums[j] < target){
                    counter += 1;
                }
            }
        }

        return counter;
    }
};