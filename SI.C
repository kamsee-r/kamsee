//Program to calculate simple interest;

/*
Program to calculate simple interest
Author: chris munene murithi
Reg no.: CT101/G/21909/24
Date: 30/09/2024
*/

//Preprocessor directive-scanf(),printf()

#include <stdio.h>
int main(){
	int principal ='p'//%d
	;float time ='t';//%f
	float rate ='r';//%f
    float simpleInterest = 'SI';//%f

    printf("key in the principal amount: ");
    scanf("%d", &principal);
    printf(" The principal is \t %d \n",principal);

    printf("key in the time (in years): ");
    scanf("%f", &time);
    printf(" The time is \t %.1f \n",time);

    printf("key in the rate of interest: ");
    scanf("%f", &rate);
    printf("The rate is \t %.2f \n",rate);
    
    simpleInterest = (principal * time * rate) / 100;

    
    printf("The simple interest is: %.2f\n", simpleInterest);

    return 0;
}
