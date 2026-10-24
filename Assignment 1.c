#include<stdio.h>
/* Determining whether a given number
   is positive,negaor zero */
  int main()
{
    int a;
    printf("\n Enter the number:");
    scanf("%d",&a);
    if(a>0)
       printf ("\n %d is positive",a);
    if(a==0)
       printf("\n %d is zero",a);   
    if(a<0) 
       printf("\n %d is negative",a);
    return 0;
}