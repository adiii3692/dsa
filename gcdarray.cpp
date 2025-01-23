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
  
    int findGCD(vector<int>& nums) {
        int low = 1001, high = 0;
        for(int e: nums){
            if(e>high) high = e;
            if(e<low) low = e;
        }
        return gcd(low,high);
    }
};