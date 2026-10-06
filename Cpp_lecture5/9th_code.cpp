//WAF to print a number is prime or not.
#include <iostream>
using namespace std;
bool prime1(int n){
    if(n == 1){
        return false;
    }
    for(int i=2; i<=n-1;i++){
        if( n%i == 0 ){
            return false;
        }
    }
    return true;
}
bool prime2(int n){
    if(n == 1){
        return false;
    }
    for(int i=2; i*i<=n;i++){
        if( n%i == 0 ){
            return false;
        }
    }
    return true;
}
int main(){
    cout<<prime2(4)<<endl;
    return 0;
}