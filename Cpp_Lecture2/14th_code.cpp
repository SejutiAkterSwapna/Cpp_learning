/*Question2:Write a C++ program that takes a year from the user and print whether 
that year is a leap year or not.*/
#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the YEAR : ";
    cin>>year;

    if(year%4 == 0){
        cout<<year<<" is Leap Year"<<endl;
    }
    else{
        cout<<year<<" is NOT Leap Year"<<endl;
    }
    
    return 0;
}