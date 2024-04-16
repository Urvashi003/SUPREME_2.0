#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    //bc
    if(n==0)
    return 0;
    if(n==1)
    return 1;

    //rr
    // int fact =0;
    // int fact2 = 1;
    // int ans;
    // ans = fact + fact2;
    // fact = fact2;
    // fact2= ans;
    int ans = fibonacci(n-1) + fibonacci(n-2);
    return ans;


}


int main(){
    int n;
    cin>>n;
    cout<< fibonacci(n)<<endl;
}