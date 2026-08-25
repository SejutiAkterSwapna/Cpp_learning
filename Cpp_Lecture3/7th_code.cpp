//Print numbers from n to 1 usin for loop
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    for( int i= num; i>=1; i--){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}