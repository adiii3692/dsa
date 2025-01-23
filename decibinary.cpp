#include <string>
using namespace std;

class Solution {
public:
    int minPartitions(string n) {
        int high = n[0] - '0';
        for(char c: n){
            if((int)c - (int)'0'>high){high = (int)c - (int)'0';}
        }

        return high;
    }
};