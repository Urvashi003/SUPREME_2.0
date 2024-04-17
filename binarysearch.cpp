#include<bits/stdc++.h>
using namespace std;

int bs(int arr[], int key, int s, int e){
    // if(s>e)
    // return -1;

    int mid = s+(e-s)/2;
    if(arr[mid]==key)
    return mid;
    else if(key>arr[mid])
    {
        return bs(arr,key,mid+1,e);
    }
    else{
        return bs(arr,key,s,mid-1);
    }
}

int main(){
    int arr[6]= {11,12,13,14,15,16};
    int n=6;
    int key = 14;

    int s =0;
    int e = n-1;
    cout<< bs(arr,key,s,e);
}