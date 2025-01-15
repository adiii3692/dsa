#include <iostream>
#include <vector>
using namespace std;

size_t binarySearch(vector<int> &nums, int target){
    size_t l{0},r{nums.size()-1};

    while(l<=r){
        size_t mid  = (l+r)/2;
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

    size_t returnVal{1};
    return returnVal;
}

int main(){
    vector<int> nums = {1,3,4,5,6,9};
    int target = 16;
    cout<<"Does number "<<target<<" exist: "<<binarySearch(nums,target)<<endl;
}

