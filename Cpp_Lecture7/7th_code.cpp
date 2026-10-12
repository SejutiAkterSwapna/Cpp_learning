#include <iostream>
using namespace std;

int main(){
    int a =10;
    int &b = a;
    b = 25;
    cout<<a<<"\n";
    cout<<b<<"\n";
    return 0;
}