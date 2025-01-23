#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 1;
        int profit = 0;
        while(r<prices.size()){
            if(prices[l]<prices[r]){
                int currentProf = prices[r] - prices[l];
                if (currentProf>profit){profit = currentProf;}
            }
            else{
                l = r;
            }
            r += 1;
        }

        return profit;
    }
};
