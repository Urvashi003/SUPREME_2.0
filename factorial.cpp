#include<iostream>
using namespace std;

int factorial(int n){
    
   
//     int ans =1;
//    for(int i =n; i>=1 ; i--){
//     ans = ans*i;
//    }
//    return ans;

int ans = 1;
if(n==1)
return ans;

ans = n* factorial(n-1);
   
}

int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    int solve = factorial(n);
    cout<< solve<<endl;


}