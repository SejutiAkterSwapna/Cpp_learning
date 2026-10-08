//Dereference operator
#include <iostream>
using namespace std;
int main(){
    int a = 2;
    int *ptr = &a;
    cout<<*ptr<<endl;
    cout<<*(&a)<<endl;
    return 0;
}