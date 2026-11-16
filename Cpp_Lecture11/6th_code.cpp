//Search in Sorted matrix
#include <iostream>
using namespace std;
void searchVal (int mat[][4], int n, int val){
   for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if( val == mat[i][j] ){
            cout<<i << j;
        }
      }
   } 
   cout<<endl;
}
int main(){
    int matrix[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    int value = 33;
    return 0;
}