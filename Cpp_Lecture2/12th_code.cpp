//Built a calculator using with Switch for the 4 basic Arithmetic Operators.
#include <iostream>
using namespace std;
int main(){
    int a, b;
    char opr;
    cout<<"Enter 1at number = ";
    cin>>a;
    cout<<"Enter 2nd number = ";
    cin>>b;
    cout<<"Enter Operators number = ";
    cin>>opr;
    switch (opr){
        case '+' : cout<<"a + b = "<<a+b<<endl;  
        break;
        case '-' : cout<<"a - b = "<<a-b<<endl;
        break;
        case '*' : cout<<"a * b = "<<a-b<<endl;
        break;
        case '/' : cout<<"a / b = "<<a/b<<endl;
        break;
    
    
    }
    
    return 0;
}