//Question 5 : Write a function that accepts a character (ch) as parameters & returns
#include <iostream>
using namespace std;
char nextCh(char ch){
    int nCl = ch + 1;
    return nCl;
}
int main(){
    cout<<nextCh('h')<<endl;
    return 0;
}