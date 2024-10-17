/*
// 2 D arrays
author: Chris Munene Murithi
reg: CT101/G/21909/24
*/
#include<stdio.h>
int main()
{
	int i,j;
	int marks[2][3]={{2,5,1},{0,3,7}};
	for(i=0;i<2;i++){
	    for(j=0;j<3;j++){
	        printf("marks[%d][%d]=%d\n",i,j,marks[i][j]);
	    }
	}
	return 0;
}