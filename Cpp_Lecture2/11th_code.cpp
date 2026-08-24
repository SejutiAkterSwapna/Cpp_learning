//Built a calculator for the 4 basic Arithmetic Operators.
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
    if(opr=='+'){
        cout<<"a + b = "<<a+b<<endl;
    }
    else if(opr=='-'){
        cout<<"a - b = "<<a-b<<endl;
    }
    else if(opr=='*'){
        cout<<"a * b = "<<a*b<<endl;
    }
    else if(opr=='/'){
        cout<<"a / b = "<<a/b<<endl;
    }
    else{
        cout<<"Invalid operators"<<endl;
    }
    
    return 0;
}