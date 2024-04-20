#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> brr;
    vector<int>v1(10,0);
    vector<int>v2(5,9);
    vector<int>v3(3,4);

    brr.push_back(v1);
    brr.push_back(v2);
    brr.push_back(v3);

    for(int i=0; i<brr.size(); i++){
        for(int j =0; j<brr[i].size(); j++){
            cout<< brr[i][j]<<" ";
        }
        cout<<endl;
    }
    

}