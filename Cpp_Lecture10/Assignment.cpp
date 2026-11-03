#include <iostream>
using namespace std;
void printSort(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}
void bubbleSort(int *arr, int n){ //Descending
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    printSort(arr,n);
}
void selectionSort(int *arr, int n){ //Descending
    for(int i=0; i<n-1; i++){
        int minInt = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minInt]){
                minInt = j;
            }
        }
        swap(arr[i],arr[minInt]);
    }
    printSort(arr,n);
}
void insertionSort(int *arr, int n){//Descending

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
void countSort(int *arr, int n){
    int freq[10000];//range
    int minVal = INT_MAX, maxVal = INT_MIN;
    for(int i=0; i<n; i++){
        minVal = min(minVal,arr[i]);
        maxVal = max(maxVal,arr[i]);
    }
    //1st step -> O(n)
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    //2nd step -> O(range)= max-min 
    for(int i= minVal,j=0; i<=maxVal; i++){
        while(freq[i] < 0){
            arr[j++] = i;
            freq[i]--;
        }
    }
    printSort(arr,n);
}
int main(){
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
    // selectionSort(arr,n);
    // insertionSort(arr,n);
    // countSort(arr,n);
    return 0;
}