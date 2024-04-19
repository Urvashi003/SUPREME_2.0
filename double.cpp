#include<iostream>
using namespace std;

void doubleArray(int arr[], int i, int n){
   //bc
   if(i>=n){
    return;
   }

   arr[i]= arr[i]*2;
   cout<< arr[i]<<"\t";
   doubleArray(arr,i+1,n);
   
}

int main(){
    int arr[]= {1,2,3,4,5};
    int n =5;
    int i =0;
    doubleArray(arr,i,n);
   

}