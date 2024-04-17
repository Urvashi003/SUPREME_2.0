#include<iostream>
#include<limits.h>
using namespace std;

void minArray(int arr[], int size, int index, int &mini){
    if(index>=size){
        return;
    }

    mini = min(mini, arr[index]);

    minArray(arr,size,index+1,mini);

}

int main(){
    int arr[]= {5,6,7,8,9};
    int size =5;
    int index=0;

    int mini = INT_MAX;

     minArray(arr,size, index, mini);
     cout<<mini;
}