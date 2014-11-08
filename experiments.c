#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include "matrix.h"

double experminent_data(int num){
	double elapsed;
	struct timeval t0, t1;
	switch(num){
		case 0: 
			printf("Writing Row Major Order \t- \tt:");
			gettimeofday(&t0, NULL);
			write_row();
			break;
		case 1: 
			printf("Writing Column Major Order \t- \tt:");
			gettimeofday(&t0, NULL);
			write_col();
			break;
		case 2: 
			printf("Reading Row Major Order \t- \tt:");
			gettimeofday(&t0, NULL);
			read_row();
			break;
		case 3: 
			printf("Reading Column Major Order \t- \tt:");
			gettimeofday(&t0, NULL);
			read_col();
			break;
	}
	gettimeofday(&t1,NULL);
	elapsed = (t1.tv_sec-t0.tv_sec)+(t1.tv_usec-t0.tv_usec)/1000000.0;
	return elapsed;
}


void experminent_exe(int count)
{
	int i,j;
	double avg,currtime;
	for(j=0;j<4;j++){
		avg = 0;
		for(i=0;i<count;i++){	
			currtime = experminent_data(j);
			avg+= currtime;
			printf("%fs\n",currtime);
		}
		printf("Average time \t\t\t- \tt:%fs\n\n",avg/i);
	}
}
