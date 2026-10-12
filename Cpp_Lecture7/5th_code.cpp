//Reference variables
#include <iostream>
using namespace std;
void changA(int &b){
    b = 20;
    cout<< b <<endl;
}
int main(){
    int a = 2;
    changA(a);
    cout<< a <<endl;
    return 0;
}