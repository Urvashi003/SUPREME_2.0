#include<iostream>
#include<string>
using namespace std;

// void LastOccLTR(string &s, char x,int i, int &ans){
//     //bc
//     if(i>=s.size()){
//         return;
//     }

//     //process
//     if(s[i]==x){
//         ans =i;
//     }

//     //rec call
//     LastOccLTR(s,x,i+1,ans);
// }

void LastOccRTL(string &s, char x ,int i, int &ans){
    //bc
     if(i<0){
        return;
     }

    //process
    if(s[i]==x){
        ans =i;
        return;
    }

    //rec call
    LastOccRTL(s,x,i-1,ans);
}

int main(){
    string s;
    cin>>s;
    char x;
    cin>>x;
    // int i;
    int ans = -1;
    
    // LastOccLTR(s,x,0,ans);
    LastOccRTL(s,x,s.size()-1,ans);
    cout<<ans<<endl;


}