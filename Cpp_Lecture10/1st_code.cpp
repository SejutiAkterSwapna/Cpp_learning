//Bubble Sort         [ TC = O(n^2) ]
#include <iostream>
using namespace std;
void printSort(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}
void bubbleSort_1(int *arr, int n){ //Ascending
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    printSort(arr,n);
}
void bubbleSort_2(int *arr, int n){ //Descending
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    printSort(arr,n);
}
int main(){
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort_1(arr,n);
    bubbleSort_2(arr,n);
    return 0;
}