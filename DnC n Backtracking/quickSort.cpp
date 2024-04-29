#include<iostream>
using namespace std;

void quickSort(int arr[], int start, int end) {
    if (start >=end) 
        return;
        
        int pivot = end;
        int i = start - 1;
        int j = start;
        while(j<pivot) {
            if (arr[j] <= arr[pivot]) {
               i++;
                swap(arr[i], arr[j]);
            }
            ++j;
        }
        ++i;
        swap(arr[i], arr[end]);
        // int pivotIndex = i + 1;

        quickSort(arr, start, i - 1);
        quickSort(arr, i+ 1, end);
    
}

int main() {
    int arr[] = {9, 8, 7, 6, 5};
    int size = 5;
    quickSort(arr, 0, size - 1);

    cout << "Sorted array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}