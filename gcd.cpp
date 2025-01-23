#include<iostream>
using namespace std;

int gcd(int a, int b){
    //If anything is zero
    if (a==0){
        return b;
    }

    if (b==0){
        return a;
    }

    if (a == b){
        return a;
    }

    if(a>b){
        return gcd((a-b),b);
    }

    return gcd(a,(b-a));
}

int main(){
    cout<<"GCD of 660 and 1400: "<<gcd(660,1400)<<endl;
}