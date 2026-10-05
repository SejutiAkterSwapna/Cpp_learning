//Function.
#include <iostream>
using namespace std;
void helloW(){
    cout<<"Hello World\n";
}
void assistant(){
    helloW();
    cout<<"Work done \n";
}
int main(){
    assistant();//function call
    return 0;
}