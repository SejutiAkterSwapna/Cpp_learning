#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    if(age>=18){
        cout<<"You can vote"<<endl;
    }
    if(age>=20){
        cout<<"You can married"<<endl;
    }
    else{ 
        cout<<"NOT ADULT"<<endl;
    }
    return 0;
}