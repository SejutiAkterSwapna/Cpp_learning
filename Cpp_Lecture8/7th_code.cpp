#include <iostream>
using namespace std;
void func(int arr[]){
    arr[0] = 100;
}
void func2(int *ptr){
    ptr[0] = 100;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int a = 5;
    int *ptr = &a;
    func(arr);//passing array name is eq. to passing the pointer
    func2(ptr);
    cout<< arr[0]<<endl;
    cout<< ptr[0]<<endl;

    return 0;
}