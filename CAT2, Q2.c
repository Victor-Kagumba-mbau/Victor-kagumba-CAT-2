/*
CAT 2 Question 2 section B
Name: Victor Kagumba
Reg No: CT101/G/23670/24
Date: 07/11/2024
*/
//An array is a data structure that stores a collection of elements of the same data type in contiguous memory location
#include <stdio.h>
int main(){
	int i, k;
	int score[2][2]={{65,92},{84,72}};
	
	for (i=0; i<2; i++){
		for (k=0;k<2; k++){
			printf("score [%d][%d] %d \n",i,k, score[i][k]);
		}
	}
	
	return 0;
}