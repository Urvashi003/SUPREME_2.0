#include<iostream>
#include<vector>
using namespace std;

int main(){
    // int arr[5];
    // vector<int> v(5,101);
    // vector<int> v;
   
    // cout<<"printing vector"<<endl;
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // v.push_back(8);
    // v.push_back(0);
    // v.push_back(2);
    // v.push_back(1);
    // // v.push_back(3);

    //  cout<<v.size();
    //  cout<<endl;
    //  cout<<v.empty();

    vector<vector<int>> arr(5,vector<int>(10,0));
    //row size 
    cout<<arr.size();
    cout<<endl;
   
    for(int i =0; i<arr.size(); i++){
        for(int j =0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   cout<< arr[0].size();


}