//Print sum fo Natural number.
#include <iostream>
using namespace std;
int main(){
    int N,sum =0;
    cout<<"Enter N number : ";
    cin>>N;
    
    for(int i=1; i<= N; i++){
        sum=sum+i;
    }
    cout<<"Sum is = "<<sum<<endl;
    return 0;
}