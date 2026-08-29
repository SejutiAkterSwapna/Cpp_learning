// print the sum of digits of a number using while loop
#include <iostream>
using namespace std;
int main(){
    int n = 12345;
    int DigSum = 0;
    while(n>0){
        int lastDig = n % 10;
        if(lastDig % 2 != 0){
            DigSum += lastDig;
        }
        n = n / 10;
    }
    cout<<"Sum is "<<DigSum<<endl;
    
    return 0;
}