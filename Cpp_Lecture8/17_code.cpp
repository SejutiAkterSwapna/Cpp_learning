//pointer Arithmetic.(Subtraction of pointer)
#include <iostream>
using namespace std;
int main(){
    int arr[20] = {5,3,6,7,4,1};
    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3;//7
    
    cout<< *ptr1 <<endl;//5
    cout<< *ptr2 <<endl;//7

    return 0;
}