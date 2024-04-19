#include<iostream>
using namespace std;

int findIndex(int arr[], int size, int index, int target){
    //bc
    if(index>=size){
        return -1;
    }

    if(arr[index]==target){
        return index;
    }
    findIndex(arr,size,index+1, target);
}

int main(){
    int arr[]= {10,20,30,40,50};
    int size = 5;
    int index = 0;
    int target = 30;

    cout<<findIndex(arr,size,index,target);

}