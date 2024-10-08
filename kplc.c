//program to print electricity bill charges
/*
author: Chris munene murithi
reg: CT101/G/21909/24
*/
#include<stdio.h>
int main(){
int customer_id;
char customer_name[50];
float units_consumed;
float total_bill_charges;

printf("key in the customer_id:");
scanf("%d",&customer_id);

printf("key in the customer_name:");
scanf("%s",&customer_name);

printf("key in the units_consumed:");
scanf("%f",&units_consumed);

if (units_consumed<=83.4){
    total_bill_charges=100;
   }
	
    else if (units_consumed<=199){
    total_bill_charges=units_consumed*1.20;
   }
    
    else if (units_consumed<=399){
    total_bill_charges=units_consumed*1.50;
   }
    
    else if (units_consumed<=599){
    total_bill_charges=units_consumed*1.80;
   }
   
    else {
    (units_consumed>=600);
    total_bill_charges=units_consumed*2.00;
 
    }
    
   // apply surcharge if the bill exceeds ksh 400
      if (total_bill_charges>400){
    	total_bill_charges+=total_bill_charges*0.15;
    	}
    	
     
    printf("\n the customer details are:\n");
printf("the customer_id is: %d\n",customer_id);
printf("the customer_name is: %s\n",customer_name);
printf("the units_consumed is: %.2f\n",units_consumed);
 printf("the total_bill_charges are %.2f\n",total_bill_charges);
 

return 0;
}