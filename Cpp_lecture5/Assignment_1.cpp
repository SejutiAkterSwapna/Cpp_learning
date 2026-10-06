//Question 1 : Write a function to check if a number is a palindrome in C++.
//(121 is a palindrome, 321 is not)
#include <iostream>
using namespace std;
int reverseNum(int n){
    int New_n = 0;
    while(n > 0){
        int lastDig = n % 10;
        New_n = New_n * 10 + lastDig;
        n = n / 10;
    }
    return New_n;
}
bool palindromeIs(int num){
    int Rev_num = reverseNum(num);
    return num == Rev_num;
}
int main(){ 
    cout<<palindromeIs(121)<<endl;

    return 0;
}