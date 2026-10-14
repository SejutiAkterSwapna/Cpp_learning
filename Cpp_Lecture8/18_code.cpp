//pointer Arithmetic.(Subtraction of pointer)
#include <iostream>
using namespace std;
int main(){
    int arr[] = {4,7,3,6,2,1};
    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3;
    
    cout<< (ptr2 < ptr1)<<endl;//No:false = 0
    cout<< (ptr2 > ptr1)<<endl;//yes:true = 1

    return 0;
}