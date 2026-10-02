//Question 1 : WAP to find the Factorial of a number entered by the user.
//0! = 1, 1! = 1, 2! = 2, 3! = 6, 4! = 24
#include <iostream>
using namespace std;
int main(){
int n;
int fact=1;
cout<<"Enter a number : ";
cin>> n;
for(int i=1; i<=n; i++){
    fact *= i;
}
cout<<"Factorial is = "<<fact<<endl;
return 0;
}