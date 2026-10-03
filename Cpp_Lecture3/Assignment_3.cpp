//Question 2 : WAP to print the multiplication table of a number, entered by the user.
#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number : ";
cin>> n;
for(int i=1; i<=10; i++){
    int mul = n * i;
    cout<<n<< "*" <<i<<" = "<<mul<<endl;
}
return 0;
}