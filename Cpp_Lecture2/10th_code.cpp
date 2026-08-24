//Ternary Operator
#include <iostream>
using namespace std;
int main(){
    //Largest of 2 numbers
    int a = 5, b = 3;
    int largest = (a>=b) ? a:b;
    cout<<"Largest number is "<<largest<<endl;

    //odd or Even number
    int num = 6;
    bool isOdd = (num%2 != 0) ? false : true;
    cout<<"isOdd"<<endl;

    return 0;
}