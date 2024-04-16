#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int power(int n){
    if(n==0)
    return 1;

   n= 2* power(n-1);

   return n;

    
}

int main(){
    int n;
    cin>>n;
    cout<<power(n);
}