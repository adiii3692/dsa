#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> mergeSort(vector<int>& nums){
        if(nums.size()>1){
            vector<int> left = vector<int>(nums.begin(),nums.end()-(nums.size()/2));
            vector<int> right;
            if(nums.size()%2==0){
                right = vector<int>(nums.begin()+(nums.size()/2),nums.end());
            }
            else{
                right = vector<int>(nums.begin()+(nums.size()/2)+1,nums.end());
            }

            mergeSort(left);
            mergeSort(right);

            int i{0},j{0},k{0};

            while(i<left.size() && j<right.size()){
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

    int singleNumber(vector<int>& nums) {
        nums = mergeSort(nums);
        cout<<"-----AFTER MERGE-------"<<endl;
        for(int i{0};i<nums.size();i++){
            cout<<"Element at "<<i<<" = "<<nums.at(i)<<endl;
        }
        int i{0};
        while(i<nums.size()-1){
            if(nums.at(i) != nums.at(i+1)){
                return nums.at(i);
            }

            i += 2;
        }

        return nums.at(nums.size()-1);
    }
};
