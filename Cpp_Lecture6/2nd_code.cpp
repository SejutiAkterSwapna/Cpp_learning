//Binary to Decimal
#include <iostream>
using namespace std;
void binToDec(int binNum){
    int n = binNum;
    int decNum = 0;
    int pow = 1;//2^0,2^1,2^3.......
    while(n > 0){
       int lastN = n % 10;
       decNum += lastN * pow;
       pow *= 2;
       n = n/10;
    }
    cout<<decNum<<endl;
}
void decToBin(int decN){
    int n = decN;
    int pow = 1;//10^0,10^1,10^2....10^n
    int binN = 0;
    while(n > 0){
        int rem = n % 2;
        binN += rem * pow;
        n /=2;
        pow *= 10;
    }
    cout<<binN<<endl;
}
int main(){
    binToDec(100101);
    decToBin(22);
    return 0;
}