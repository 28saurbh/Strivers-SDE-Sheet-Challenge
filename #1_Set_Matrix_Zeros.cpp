#include <bits/stdc++.h>

//Certainly! Here's a step-by-step approach for the "Set Matrix Zeros" problem:
//1.  Iterate through the matrix and whenever you encounter a zero at position (i, j), mark all non-zero elements in the same row and column with a distinct value, such as -1. You can achieve this by calling a helper function setOnes that marks the non-zero elements in the same row and column as -1.
//2. After marking all the necessary elements, iterate through the matrix again and replace all the marked -1 values with zeros.
//By following this approach, you will set the entire row and column to zeros whenever a zero is encountered in the matrix.
	
void setOnes(vector<vector<int>> &matrix, int row, int col){

	int rowSize = matrix.size();
	int colSize = matrix[row].size();

	int upper = row;
	while(upper >= 0){
		if(matrix[upper][col] != 0){
			matrix[upper][col] = -1;
		}
		upper--;
	}

	int lower = row;
	while(lower <= rowSize-1){
		if(matrix[lower][col] != 0){
			matrix[lower][col] = -1;
		}
		lower++;
	}

	int left = col;
	while(left >= 0){
		if(matrix[row][left] != 0){
			matrix[row][left] = -1;
		}
		left--;
	}

	int right = col;
	while(right <= colSize-1){
		if(matrix[row][right] != 0){
			matrix[row][right] = -1;
		}
		right++;
	}
}

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int rowSize = matrix.size();
	int colSize = matrix[0].size();

	
	for(int i = 0; i<matrix.size(); i++){
		for(int j = 0; j<matrix[i].size(); j++){
			if(matrix[i][j] == 0){
				setOnes(matrix, i, j);
			}
		}
	}

	for(int i = 0; i<matrix.size(); i++){
		for(int j = 0; j<matrix[i].size(); j++){
			if(matrix[i][j] == -1){
				matrix[i][j] = 0;
			}
		}
	}

}
