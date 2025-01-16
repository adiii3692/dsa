#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countOnes(int n){
        int counter{0};
        if (n==0){
            return 0;
        }

        for(int i{0};i<32;i++){
            if(n & (1<<i)){
                counter += 1;
            }
        }

        return counter;
    }
    vector<int> countBits(int n) {
        vector<int> result{};
        for(int i{0};i<=n;i++){
            result.push_back(countOnes(i));
        }

        return result;
    }
};
