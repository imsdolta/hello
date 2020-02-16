#include<bits/stdc++.h>
using namespace std;
const int M=3,N=3;
void PrintMat(int mat[N][M]){       // pass array with size
    
    for(int i = 0;i < N; ++i){
        for(int j = 0;j < M; ++j){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
void transpose(int A[][N]) 
{ 
    for (int i = 0; i < N; i++) 
        for (int j = i+1; j < N; j++) 
            swap(A[i][j], A[j][i]); 
} 
int main(int argc, char const *argv[])
{
    int mat[N][M]= {
        {1,0,3},
        {1,3,5},
        {5,4,0}
    };
    transpose(mat); 
    PrintMat(mat);
    return 0;
}