#include<bits/stdc++.h>
using namespace std;

// void printArray(int arr[], int n){
//     if(n==0){
//         return ;
//     }
    
//     int i=0;
//     cout<<arr[i];
    
//      printArray(arr+1,n-1);
   
//     return;

// }

// int main(){
//     int arr[10]= {1,2,3,4,5};
//     int n=5;
//     int i =0;
    
//     printArray(arr,n);

// }

void printArray(int arr[], int size, int index){
    if(index>=size){
        return;
    }

    
    printArray(arr,size,index+1);
    cout<<arr[index]<<" ";// reverse print
}

int main(){
    int arr[] ={1,2,3,4,5};
    int size = 5;
    int index =0;

    printArray(arr,size,index);
}