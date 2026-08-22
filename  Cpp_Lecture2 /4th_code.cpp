#include<iostream>
using namespace std;
int main(){ //Data types in c++
    int a = 5, b =5,c, age=18;
    bool isAddalt = true;

    cout<<a<<"  "<<b<<"  "<<isAddalt<<endl;
    cout<<"a+b="<<a+b<<endl;
    cout<<"c="<<c<<endl;
    cout<<"size if int="<<sizeof(int)<<endl; //int->4bytes/32bits
    cout<<"size if char="<<sizeof(char)<<endl; //char->1bytes/8bits
    cout<<"size if bool="<<sizeof(bool)<<endl; //bool->1bytes/8bits
    cout<<"size if double="<<sizeof(double)<<endl; //double->8bytes/64bits

    return 0;
}
