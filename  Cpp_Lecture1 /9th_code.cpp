/* Question2:Enter cost of 3 items from the user(using float data type)
-a pencil, a pen and an eraser. You have to output the total cost of the items
cost of the items back to the user as their bill.
(Addon:You can also try adding 18% GST tax to the items in the bill as an advanced
problem)*/
#include <iostream>
using namespace std;
int main(){

    float pencil,pen,eraser;
    cout<<"Enter Pencil price = ";
    cin>>pencil;

    cout<<"Enter Pencil pen = ";
    cin>>pen;

    cout<<"Enter Pencil Eraser = ";
    cin>>eraser;

    float cost=pencil+pen+eraser;

    cout<<"Total Cost is : "<<cost<<endl;
    cout<<"Total Cost With GST : "<<(cost+0.18*cost)<<endl;

    return 0;
}