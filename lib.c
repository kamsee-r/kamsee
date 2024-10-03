//Program to calculate FineAmount in the library
/*
program to calcuate FineAmount in the library
Author:chris munene murithi
Reg no:CT101/G/21909/24
Date:3/10/2024
*/
//preprocessor directive-printf(),scanf()

#include<stdio.h>

int main(){
	;int BookID //%d
	;int DueDate //%d
	;int ReturnDate//%d
	;float Overdue //%f
	;float FineAmount//%f
	
	;printf("key the BookID:");
	scanf("%d",&BookID);
	printf("The BookID is \t %d \n",BookID);
	
	printf("key the DueDate:");
	scanf("%d",&DueDate);
	printf("The Due Date is \t %d \n",DueDate);
	
	printf("key the ReturnDate:");
	scanf("%d",&ReturnDate);
	printf("The ReturnDate is \t %d \n",ReturnDate);
	
	Overdue =(ReturnDate-DueDate);
	printf("The Overdue is:%.1f \n",Overdue);
	
	
	if(Overdue <=8){
	FineAmount=Overdue*25;
	printf("The FineAmount is:%.1f \n",FineAmount);}
	
	
    
	  else if(Overdue<=15){
    ;FineAmount=Overdue*75
    ;printf("The Charges is:%.1f \n",FineAmount);}
    
    
  
      else{
	  (Overdue>=16);
    FineAmount=Overdue*100;
    printf("The Charges is:%.1f \n",FineAmount);}
 
	return 0;
}
	
