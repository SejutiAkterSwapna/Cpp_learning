//Passing Arguments
#include <iostream>
using namespace std;
void changeA(int *ptr){
    *ptr = 5;
    cout << *ptr << endl;
}
void ChangeA (int a){
    a = 5;
    cout << a << endl;
}
int main(){
    int a = 10;
    changeA(&a);
    cout << a << endl;
    ChangeA(a);
    return 0;
}