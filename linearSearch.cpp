#include<iostream>
using namespace std;

bool searchArray(int arr[], int index, int size, int target){
    if(index>=size){
        return false;
    }

    if(arr[index]==target){
        return true;
    }

    int aagekaans = searchArray(arr, index+1, size, target);
    return aagekaans;
}

int main(){
    int arr[]= {1,2,3,4,5};
    int size = 5;
    int target = 8;
    int index = 0;

    cout<< searchArray(arr,index,size,target);
}