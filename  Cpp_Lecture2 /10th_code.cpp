/* Question3:Build a Simple Interest Calculator.
        Input:principal(P),rate(R),time(T)
        Output:(P*R*T)/100 */
#include <iostream>
using namespace std;
int main(){
    float P ,R,T;
    cin>>P;
    cin>>R;
    cin>>T;
    float si =(P*R*T)/100;

    cout<<"Interest is: "<<si<<endl;
    return 0;
}        