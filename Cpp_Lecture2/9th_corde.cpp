//print the larges 3 numbers.
#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter 1st Number : ";
    cin>>num1;
    cout<<"Enter 2nd Number : ";
    cin>>num2;
    cout<<"Enter 3rd Number : ";
    cin>>num3;

    if(num1>num2 && num1>num3){
        cout<<"Larges num is "<<num1<<endl; 
    }
    else if(num2>num3){
        cout<<"Larges num is "<<num2<<endl;
    }
    else{
        cout<<"Larges num is "<<num3<<endl;
    }
    return 0;
}