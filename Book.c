// program to define a structure named book
/*
Author: Chris Munene Murithi
Reg: CT101/G/21909/24
Date: 10/22/2024
*/

#include<stdio.h> //scanf(), printf()
#include<string.h> // strcpy()

struct book {
char title[30];
char author_name[30];
int publ_year;
char ISBN[13];
float price;
} book;

int main ()
{
     
    
    strcpy(book.title,"Introduction to C Programing");
    strcpy(book.author_name,"John Smith");
    book.publ_year=2022;
    strcpy(book.ISBN,"9780131103627");
    book.price=49.99;
    
    printf("enter the book title:",book.title);
     scanf("%s",&book.title);
    printf("author_name:",book.author_name);
    scanf("%s",&book.author_name);
    printf("publication year:",book.publ_year);
    scanf("%d",&book.publ_year);
    printf("ISBN:",book.ISBN);
    scanf("%s",&book.ISBN);
    printf("price:",book.price);
    scanf("%d",&book.price);
    
    printf("title: %s\n",book.title);
    printf("author_name: %s\n", book.author_name);
    printf("publication year: %d\n",book.publ_year);
    printf("ISBN:%s\n", book.ISBN);
    printf("price:%.2f\n", book.price);
    
    return 0;
}