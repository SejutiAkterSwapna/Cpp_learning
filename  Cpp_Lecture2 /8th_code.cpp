/*  Question1:In a program,input the side of asquare.You have to output the area
    of the square.      Input:n(side)
                        Output:n*n(area) */
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Side : ";
    cin>>n;

    int area=n*n;
    cout<<"The Area is : "<<area<<endl;
    return 0;
}                        