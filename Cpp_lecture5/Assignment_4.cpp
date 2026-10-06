///Question 4 : Write a function that prints the largest of 3 numbers
#include <iostream>
using namespace std;
int largeNum(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }else{return c;}
}
int main(){
    cout<<largeNum(6,9,2)<<endl;
    return 0;
}