//User input value.
#include <iostream>
using namespace std;
int main(){
    int len;
    cout<< "Entre Length of Array :";
    cin>> len;
    int arr[len];
    //int len = sizeof(arr) / sizeof(int);

    for(int i = 0; i < len; i++){
        cin>> arr[i];
    }
    for(int i = 0; i < len; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}