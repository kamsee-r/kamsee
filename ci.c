//Program to calculate compound interest

/*
Progam to calaculate compound interest
Author:chris munene murithi
Reg No:CT101/G/21909/24
Date:28/09/2024
*/

//preprocessor directive-printf(),scanf()

#include <stdio.h>
int main(){
	int principal ='p'//%d
	;float time ='t'//%f
	;float rate ='r'//%f
	;float compoundInterest ='CI'//%f
	;float numberofcompoundingayear ='n'//%f
	
 

	;printf("key in the principal amount: ");
	scanf("%d",&principal);
	printf("The princpal is \t %d \n",principal);
	
	
	;printf("key in the time(in years):");
	scanf("%f", &time);
	printf("The time is \t %.1f \n",time);
	
	
	
   	;printf("key in the rate of interest:(%%)");
	scanf("%f", &rate);
	printf("The rate is \t %.2f \n",rate);
	
	
    ;printf("key in the number compounded yearly:");
    scanf("%f", &numberofcompoundingayear);
    printf("The number compounded is \t %.1f \n",numberofcompoundingayear);
    
    compoundInterest=principal*pow(1+rate/(100*numberofcompoundingayear),time*numberofcompoundingayear)-principal;
	
	
	printf("The compound Interest is \t %.2f\n",compoundInterest);
	
	return 0;
}