//Question 3 : WAP to input a number and check whether the number is an Armstrong number or not.
//
#include <iostream>
using namespace std;
int main(){
int n =371, pow = 0;
int num = n;
while (num>=0){
    int lastDig = n%10;
    int pow =pow +(lastDig*lastDig *lastDig);
    num = num/10;  
}
if(n == pow){
    cout<<"Armstrong number";
}
else{cout<<"NOT a Armstrong number";}
return 0;
}