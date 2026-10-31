//Selection sort.       [ TC = O(n^2) ]
#include <iostream>
using namespace std;
void printSort(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}
void selectionSort_1(int *arr, int n){ //Ascending
    for(int i=0; i<n-1; i++){
        int minInt = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] > arr[minInt]){
                minInt = j;
            }
        }
        swap(arr[i],arr[minInt]);
    }
    printSort(arr,n);
}

void selectionSort_2(int *arr, int n){ //Descending
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
    int main(){
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr)/sizeof(int);

    selectionSort_1(arr,n);
    selectionSort_2(arr,n);
    return 0;
}