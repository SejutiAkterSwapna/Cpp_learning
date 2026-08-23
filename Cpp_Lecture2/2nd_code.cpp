#include <iostream>//Typecasting->conversion of data from one type to another type
using namespace std;
int main(){ 

    cout<<10/3<<endl;//Implicit conversion(automatic/type promotion)
    cout<<10/3.0<<endl; //bool->char->int->float->double
    cout<<'a'+5<<endl;//97+5
    cout<<'A'+0<<endl;//65

    float pi = 3.1406;
    cout<<(int)('a')<<endl; //Explicit conversion(force by the programmer)
    cout<<((float)'A')<<endl;
    cout<<(int)(pi)<<endl;
    cout<<(char)('a'+1)<<endl;
    cout<<(bool)3+2<<endl;
    cout<<(23.5+2+'A')<<endl;
    return 0;
}