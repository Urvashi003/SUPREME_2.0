#include<iostream>
#include<limits.h>
using namespace std;

void maxArray(int arr[], int size, int index, int &maxi){
    //bc
    if(index>=size){
        return;
    }

    maxi = max(maxi,arr[index]);

    maxArray(arr,size,index+1,maxi);
}

int main(){
    int arr[]= {12,34,6,2,1};
    int size =5;
    int index =0;

    int maxi = INT_MIN;
    maxArray(arr,size,index,maxi);
    cout<<maxi;

}