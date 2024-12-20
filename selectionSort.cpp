#include <iostream>
#include <vector>
using namespace std;

size_t findMin(vector<int> &arr, size_t begin, size_t end){
    size_t smallest{begin};
    for(size_t i{begin};i<end;i++){
        if (arr[i]<arr[smallest]){
            smallest = i;
        }
    }

    return smallest;
}

void swapArr(int &a, int &b){
    int temp{a};
    a = b;
    b = temp;
}

void selectionSort(vector<int> &arr){
    for(size_t i{0};i<arr.size();i++){
        size_t smallest = findMin(arr,i,arr.size());
        if(i!=smallest){
            swapArr(arr[i],arr[smallest]);
        }
    }
}

int main(){
    vector<int> arr{2,5,1,6,9};
    selectionSort(arr);
    for(std::size_t i{0};i<arr.size();i++){
        std::cout<<"The element at "<<i<<" is: "<<arr[i]<<std::endl;
    }
};