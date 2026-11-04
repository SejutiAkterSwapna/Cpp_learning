//Spiral Matrix.
#include <iostream>
using namespace std;
void spiralMatrix(int mat[][4], int n, int m){
    int Srow=0, Scol=0;
    int Erow=n-1, Ecol=m-1;

    while(Srow <= Erow && Scol <= Ecol){
    //top
    for(int j=Scol; j<=Ecol; j++){
        cout<< mat[Srow][j]<<" ";
    }
    //right
    for(int i=Srow+1; i<=Erow; i++){
        cout<< mat[i][Ecol]<<" ";
    }
    //bottom
    for(int j=Ecol-1; j>=Scol; j--){
        cout<< mat[Erow][j]<<" ";
    }
    //left
    for(int i=Erow-1; i>=Srow+1; i--){
        cout<< mat[i][Scol]<<" ";
    }
    Srow++; Scol++;
    Erow--;Ecol--;
    }
    cout<< endl;
}
int main(){
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    spiralMatrix(matrix, 4, 4);
    return 0;
}