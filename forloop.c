//for loop
/*
Author:Chris Munene Murithi
Reg; CT101/G/21909/24
*/
#include<stdio.h>
int main(){
	int i,n;
	
	printf("key in the number:");
	scanf("%d\n",&n);
	
	for(i=1;i<=n;i+=3){
		printf("%d\n",i);
	}
	return 0;
}