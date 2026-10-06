//Question 2 : Write a function to calculate the sum of digits of a number.
#include <iostream>
using namespace std; 
int digSum(int n){
    int sum = 0;
    while(n > 0){
        int lastDig = n % 10;
        sum +=lastDig;
        n /=10;
    }
    return sum;
}
int main(){
    cout<<"Sum of digits is "<<digSum(1234)<<endl;
    return 0;
}