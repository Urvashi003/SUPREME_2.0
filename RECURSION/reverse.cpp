#include<iostream>
using namespace std;

void reverse(string &s, int start, int end){
    //bc
    if(start>=end){
        return;
    }
    //ek case
    swap(s[start], s[end]);

    //rec call
    reverse(s,start+1, end-1);
}


int main(){
    string s;
    cin>>s;

    reverse(s,0,s.size()-1);
    cout<<s;
}