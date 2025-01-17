#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {

        if(s.length()<1){
            return false;
        }

        unordered_map<char,char>bracketPair = {
            {'(',')'},
            {'[',']'},
            {'{','}'}
        };

        stack<char> stack;

        int counter = 0;

        for(int i{0};i<s.length();i++){
            if (bracketPair.count(s[i])){
                stack.push(s[i]);
                counter += 1;
            }
            else{
                if (s[i]!=bracketPair[stack.top()]){
                    return false;
                }
                counter += 1;
                stack.pop();
            }
        }

        cout<<"Counter: "<<counter<<endl;


        if(!stack.empty()){
            return false;
        }

        return true;
    }
};
