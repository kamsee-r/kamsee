//program to determine people eligible for a loan
/*
program to determine people eligible for a loan
Author:chris munene murithi
Reg no:CT101/G/21909/24
Date:3/10/2024
*/
//preprocessor directive printf() scanf()

#include <stdio.h>

int main() {
    int age ='a'//%d
    ;float income ='i'//%f

    ;printf("Plese key your age: ");
    scanf("%d", &age);

    printf("Please key your annual income (in sh): ");
    scanf("%f", &income);

    if (age >= 21 & income >= 21000) {
        printf("Congratulations! You qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
