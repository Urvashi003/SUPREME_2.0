#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void Pp(string str, int index){
    

    if(index>=str.length()){
        cout<<str<<" ";
        return;
    }
    for(int j= index; j<str.length(); j++){

        if( index != j && str[index]==str[j])
        continue;
        swap(str[index], str[j]);
    
    Pp(str, index+1);
    //backtracking
    // swap(str[index], str[j]);
    }
}

int main(){
    string str = "abc";
    sort(str.begin(), str.end());
    int index=0;
    Pp(str,index);
    return 0;


}

// #include <iostream>
// using namespace std;

// void Pp(string str, int index){
//     if(index >= str.length() - 1){ // Check if index reaches the end of the string
//         cout << str << " ";
//         return;
//     }
//     for(int j = index; j < str.length(); j++){ // Iterate through each character in the string
//         swap(str[index], str[j]); // Swap characters at index and j
//         Pp(str, index + 1); // Recursively call Pp with the next index
//         swap(str[index], str[j]); // Backtrack: restore the original string
//     }
// }

// int main(){
//     string str = "abc";
//     int index = 0;
//     Pp(str, index);
//     return 0;
// }
