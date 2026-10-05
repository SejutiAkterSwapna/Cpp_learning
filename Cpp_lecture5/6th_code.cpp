//WAF to print if a number is odd or even- a&b
#include <iostream>
using namespace std;
bool isEven(int a){
   if(a%2==0){
    return true;
}else{
    return false;
}
}

int main(){
   cout<< isEven(23)<<endl;
return 0;
}