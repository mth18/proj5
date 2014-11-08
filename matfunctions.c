#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include "matrix.h"

void read_row(){
	//row major order
	int i,j;
	for(i=0;i<PAGESIZE;i++){
		for(j=0;j<ROWCOUNT;j++){
			(void)matrix[i][j];
		}
	}
}

void read_col(){
	//col major order
	int i,j;
	for(i=0;i<ROWCOUNT;i++){
		for(j=0;j<PAGESIZE;j++){
			(void)matrix[j][i];
		}
	}
}

void write_row(){
	//row major order
	int i,j;
	for(i=0;i<PAGESIZE;i++){
		for(j=0;j<ROWCOUNT;j++){
			matrix[i][j] = 'a';
		}
	}
}

void write_col(){
	//column major order
	int i,j;
	for(i=0;i<ROWCOUNT;i++){
		for(j=0;j<PAGESIZE;j++){
			matrix[j][i] = 'a';
		}
	}
}

void clear_table(int row, int col){
	int i, j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			matrix[i][j]=0;
		}
	}
}