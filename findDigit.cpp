#include<iostream>
#include<vector>
using namespace std;

void printDigits(int num, vector<int> &ans){
    //bc
    if(num==0){
        return;
    }
    int digit= num %10;
    num = num/10;

    printDigits(num,ans);
//     cout<<digit<<endl;
   ans.push_back(digit);
}

int main(){
    int num = 1234;
    vector<int>ans;
    printDigits(num,ans);

    for(int n: ans){
        cout<<n<<endl;
    }
}