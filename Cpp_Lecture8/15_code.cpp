//pointer Arithmetic 3.
#include <iostream>
using namespace std;
void printArr(int *ptr, int n){
    for(int i=0; i<n; i++){
        cout << *ptr + i <<", ";
        //ptr = ptr + 1;
    }
    cout << endl;
}
int main(){
    int arr[]={2,5,7,4,9};
    int n = sizeof(arr)/sizeof(int);
    printArr(arr,n);
    return 0;
}