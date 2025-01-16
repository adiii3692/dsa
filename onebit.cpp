#include <iostream>
#include <cstdint>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        int counter{0};
        for(int i{0};i<31;i++){
            if(n & (1<<i)){
                counter += 1;
            }
        }

        return counter;
    }
};
