#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hashSet;
        for (int elem:nums){
            if (hashSet.count(elem)==0){
                hashSet.insert(elem);
            }
            else{
                return true;
            }
        }

        return false;
    }
};