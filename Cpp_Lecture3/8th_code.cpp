// print the sum of digits of a number using while loop
#include <iostream>
using namespace std;
int main(){
    int n = 1082957;
    int DigSum = 0;
    while(n>0){
        int lastDig = n % 10;
        DigSum += lastDig;
        n = n / 10;
    }
    cout<<"Sum is "<<DigSum<<endl;
    
    return 0;
}