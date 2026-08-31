//Check if a number is prime or not
#include <iostream>
using namespace std;
int main(){
    int n = 11;
    bool isPrime = true;
    for(int i=2; i<=n-1; i++){//i is a factor of n; i completely divides n; n is no-prime.
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout<<"Number is Prime "<<n<<endl;
    }
    else{
        cout<<"Number is NOT Prime "<<n<<endl;
    }
    return 0;
}