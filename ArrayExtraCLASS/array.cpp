#include<iostream>
using namespace std;

void shiftNegative(int arr[], int n){
    int j=0; //-ve
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main(){
    int arr[]= {-1,2,3,-4,5,-6,7};
    int n =7;

    shiftNegative(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}