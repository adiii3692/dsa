#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int gcd(int a, int b){
        //Zeroes
        if(a==0){
            return b;
        }
        if(b==0){
            return a;
        }

        if(a==b){
            return a;
        }

        if(a>b){
            return gcd((a-b),b);
        }

        return gcd(a,(b-a));
    }

    void mergeSort(vector<int>& nums){
        if(nums.size()>1){
            vector<int> left = vector<int>(nums.begin(),nums.end()-(nums.size()/2));
            vector<int> right;
            if(nums.size()%2==0){
                right = vector<int>(nums.begin()+(nums.size()/2),nums.end());
            }
            else{
                right = vector<int>(nums.begin()+(nums.size()/2)+1,nums.end());
            }

            //Recursion
            mergeSort(left);
            mergeSort(right);

            //Merge back
            int i = 0, j = 0, k = 0;

            while(i<left.size() && j<right.size()){
                if(left[i]<right[j]){
                    nums[k] = left[i];
                    i += 1;
                    k += 1;
                }
                else{
                    nums[k] = right[j];
                    j += 1;
                    k += 1;
                }
            }

            while(i<left.size()){
                nums[k] = left[i];
                k += 1;
                i += 1;
            }

            while(j<right.size()){
                nums[k] = right[j];
                k += 1;
                j += 1;
            }
        }
    }
    int findGCD(vector<int>& nums) {
        mergeSort(nums);
        return gcd(nums[0],nums[nums.size()-1]);
    }
};