//pointer Arithmetic 1.
#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int *aptr = &a;

    cout<<aptr<<endl;
    aptr++;//1 int++
    cout<<aptr<<endl;
    aptr--;//1 int--
    cout<<aptr<<endl;
    return 0;
}