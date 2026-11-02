//Insertion sort.      [ TC = O(n^2) ]
#include <iostream>
using namespace std;
void printSort(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}
void insertionSort_1(int *arr, int n){//Ascending

    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev] > curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }
    
    printSort(arr,n);  
}

void insertionSort_2(int *arr, int n){//Descending

    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev] < curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }
    
    printSort(arr,n);  
}
    int main(){
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr)/sizeof(int);
    insertionSort_1(arr, n);
    insertionSort_2(arr, n);
    return 0;
}