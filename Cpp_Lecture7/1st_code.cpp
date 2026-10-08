//Pointers
#include <iostream>
using namespace std;
int main(){
    int a = 2;
    char ch = 's';
    float pi = 3.14;

    int *ptr = &a;
    int **pptr = &ptr;
    char *ptr1 = &ch;
    float *ptr2 = &pi;

    //cout<<&a<<" = "<<ptr<<endl;
    //cout<<&ch<<" = "<<ptr1<<endl;
    //cout<<&pi<<" = "<<ptr2<<endl;

    //cout<<sizeof(ptr)<<endl;
    //cout<<sizeof(ptr1)<<endl;
    //cout<<sizeof(ptr2)<<endl;

    cout<<&ptr<<" = "<<pptr<<endl;
    return 0;
}