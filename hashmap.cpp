#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<char,char>bracketPair = {
            {'(',')'},
            {'[',']'},
            {'{','}'}
        };
    
    cout<<bracketPair[')']<<endl;
}