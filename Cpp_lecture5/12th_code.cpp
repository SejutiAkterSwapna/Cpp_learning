//Print all primes in a Range from 2 to n
#include <iostream>
using namespace std;
bool Isprime(int n){
    if(n == 1){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
void Allprime(int n){
    for(int i=2; i<=n; i++){
        if(Isprime(i)){//true
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main(){
    Allprime(55);
    return 0;
}