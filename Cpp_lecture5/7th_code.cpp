//WAF to find product of 2 numbers- a&b
#include <iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1; i<=n; i++){
        f = f*i;
    }
    cout<<"("<<n<<")Factorial is = "<<f<<endl;
    return f;
}
int main(){
    fact(2);
    fact(3);
    fact(4);
return 0;
}