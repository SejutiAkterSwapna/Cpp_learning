#include <iostream>
using namespace std;
int main(){//print Avg Marks
    float ENG,PHY,MATH,AVG;

    cout<<"English Marks = ";
    cin>>ENG;
    cout<<"Physis Marks = ";
    cin>>PHY;
    cout<<"Math Marks = ";
    cin>>MATH;
    AVG=(ENG+PHY+MATH)/3;

    cout<<"Average Marks is = "<<AVG<<endl;
    return 0;
}