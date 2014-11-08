
#define PAGESIZE 4098
#define ROWCOUNT 20480
#define ETIME 10

#ifndef MATRIX_H
#define MATRIX_H

char matrix[PAGESIZE][ROWCOUNT];

void write_row();

void write_col();

void read_row();

void read_col();

void clear_table(int,int);

double experminent_data(int);

void experminent_exe(int count);

#endif