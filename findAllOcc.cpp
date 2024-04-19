#include<iostream>
#include<vector>
using namespace std;

// void find(int arr[], int size, int index, int target){
//     //bc
//     if(index>=size){
//         return ;

//     }
//     //processing
//     if(arr[index]==target)
//     cout<<index;

//     //rr
//     find(arr,size,index+1, target);
// }

void find(int arr[], int index, int size, int target, vector<int> &ans){
    //bc
    if(index>=size)
    return;

    if(arr[index]== target)
    ans.push_back(index);

     find(arr,index+1,size,target, ans);
}

int main(){
    int arr[]= {10,20,30,40,10,10};
    int size = 6;
    int index = 0;
    int target =10;
    vector<int> ans;

    find(arr,index,size,target,ans);

    //printing vector
    for(int num: ans){
        cout<<num<<" ";
    }
}