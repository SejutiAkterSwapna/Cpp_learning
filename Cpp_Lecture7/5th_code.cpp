//Reference variables
#include <iostream>
using namespace std;
void changA(int &a){
    a = 20;
    cout<< a <<endl;
}
int main(){
    int a = 2;
    int &b = a;
    b = 10;
    //changA(a);
    cout<< a <<endl;
    cout<< b <<endl;
    return 0;
}