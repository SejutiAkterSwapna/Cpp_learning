/* Question1:Write a C++ program to get a number from the user and print whether it' 
positive  ,negative or zero.*/
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if(num > 0){
        cout<<"Number id Positive"<<endl;
    }
    else if(num < 0){
        cout<<"Number is Negative"<<endl;
    }
    else{
        cout<<"Number is ZERO"<<endl;
    }
    return 0;
}