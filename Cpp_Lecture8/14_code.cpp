//pointer Arithmetic 2.
#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int *aptr = &a;

    cout<< aptr <<endl;
    cout<< (aptr + 3) <<endl;
    cout<< (aptr - 3) <<endl;
    return 0;
}