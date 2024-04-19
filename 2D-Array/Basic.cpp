#include<iostream>
#include<limits.h>
using namespace std;

void printArray(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

bool search(int arr[][4], int row, int col, int target){
     for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==target){
                return true;
            }
        }
     }
     return false;
}

int maxArray(int arr[][4], int row, int col){
    int maxi = INT_MIN;
    for(int i =0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]>maxi){
                maxi = arr[i][j];
            }
        }
    }
    return maxi;

}

void rowSum(int arr[][4], int row, int col){
    for(int i =0; i<row; i++){
        int sum =0;
        for(int j=0; j<col; j++){
            sum = sum + arr[i][j];
        }
        cout<< sum<<endl;
    }
}

void colSum(int arr[][4], int row, int col){
    for(int i=0; i<col; i++){
        int sum =0;
        for(int j=0; j<row; j++){
            sum = sum + arr[j][i];
        }
        cout<<sum<<endl;
    }
    
}

void diagSum(int arr[][4], int row, int col){
     int sum =0;
    for(int i=0; i<row; i++){
       
       sum = sum+ arr[i][i];
    }
    cout<<sum<<endl;
}

void transpose(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=i; j<col; j++){
            swap(arr[i][j], arr[j][i]);

        }
    }
}

int main(){
    int arr[3][4]= {
         {1,2,3,4},
         {5,6,7,8},
         {9,10,11,12}
    };

    int row =3;
    int col =4;
    int target =19;
    // printArray(arr,row,col);
    // cout<< search(arr,row,col,target);
    // cout<< maxArray(arr,row,col);
//    rowSum(arr,row,col);
    //  colSum(arr,row,col);
    //  diagSum(arr,row,col);
 transpose(arr,row,col);
 printArray(arr,row,col);
    return 0;
        
    
}