// Reverse a given number & print thr result
#include <iostream>
using namespace std;
int main(){
    int N = 10829;
    int lastDig;
    int res = 0;
    while(N>0){
        lastDig = N % 10;
        res = res * 10 + lastDig;
        N = N /10;
    }
    cout<<"Reverse "<<res <<endl;
    return 0;
}