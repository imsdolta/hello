/*
Nullify Matrix: Scan the matrix , if an  element is 0 then make it's row and columns 
to zeroes
1 0 3	 -> 0 0 0
1 4 0	 -> 0 0 0
0 3 5    -> 0 0 0

*/

#include<bits/stdc++.h>
using namespace std;
const int M=3,N=3;                  // Must always be constants
void PrintMat(int mat[N][M]){       // pass array with size
	
	for(int i = 0;i < N; ++i){
		for(int j = 0;j < M; ++j){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}
void Nullify(int mat[N][M], int row, int col){          // nullify cols

	for(int i = 0; i < N; ++i){  // to make whole col as 0s start from  1st row till end
		mat[i][col] = 0;
	}
}
void Solve(int mat[N][M])           
{
	for(int i = 0;i < N; ++i){
		for(int j = 0; j < M ;++j){
			if(mat[i][j] == 0)
				Nullify(mat,i,j);
		}
	}
	PrintMat(mat);
}
int  main()
{

	
	int mat[N][M]= {
		{1,0,3}, {1,3,5},{5,4,0}
	};
	Solve(mat);
	
	return 0;
}
