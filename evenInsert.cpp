#include<iostream>
#include<vector>
using namespace std;

void solve(int arr[], int index, int size, vector<int> &ans){
   //bc
   if(index>=size){
    return;
   }
   
   //processing
   if(arr[index]%2==0){
    //even
    ans.push_back(arr[index]);
   }
   //rec call
   solve(arr,index+1,size,ans);
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size =5;
    int index =0;
    vector<int> ans;

    solve(arr,index,size,ans);

    //printing array
    for(int num: ans){
        cout<<num<<" ";
    }
}