#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<int> v1 = {1,2,3,4,5,6,7};
    vector<int> v2 = std::vector<int>(v1.begin(), v1.end()-(v1.size()/2));
    vector<int> v3 = vector<int>(v1.begin()+(v1.size()/2)+1, v1.end());
    
    for(int i{0};i<v2.size();i++){
        cout<<v2.at(i)<<endl;
    }

    cout<<"_________END OF V2_________"<<endl;

    for(int i{0};i<v3.size();i++){
        cout<<v3.at(i)<<endl;
    }


    cout<<"____________STRING_________"<<endl;

    string s = "HelloThere";
    s = tolower(s[0]);
    cout<<s<<endl;
}