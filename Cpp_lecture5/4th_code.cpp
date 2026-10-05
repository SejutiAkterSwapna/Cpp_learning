//Parameters
#include <iostream>
using namespace std;

int sum(int a, int b){//a,b are parameters
    int sum = a + b;
    return sum;
}
int diff(int a, int b){//a,b are parameters
    int diff = a - b;
    return diff;
}

    
int main(){
    int s = sum(3,4);//3,3 are argument
    cout<<"Sum is = "<<s<<endl;
    int d = diff(4,3);//3,3 are argument
    cout<<"Diff is = "<<d<<endl;
    return 0;
}