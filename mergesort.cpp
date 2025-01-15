#include <iostream>
#include <vector>
using namespace std;

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

        // cout<<"--------LEFT---------"<<endl;
        // for(int i{0};i<left.size();i++){
        // cout<<"Element at "<<i<<" = "<<left.at(i)<<endl;
        // }

        // cout<<"--------RIGHT---------"<<endl;
        // for(int i{0};i<right.size();i++){
        // cout<<"Element at "<<i<<" = "<<right.at(i)<<endl;
        // }

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

// Driver code
int main()
{
    vector<int> arr = { 12, 11, 13, 5, 6, 7 };

    mergesort(arr);

    for(int i{0};i<arr.size();i++){
        cout<<"Element at "<<i<<" = "<<arr.at(i)<<endl;
    }
}