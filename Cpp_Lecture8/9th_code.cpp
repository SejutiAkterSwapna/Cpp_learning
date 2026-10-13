//Linear Search.
#include <iostream>
using namespace std;
int linearSearch(int *arr, int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            cout<<key<<" index is "<<i<<endl;
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr)/sizeof(int); 
    int key;
    cout<<"Enter number: ";
    cin>>key;
    cout<<linearSearch(arr,n,key)<<endl;
    return 0;
}