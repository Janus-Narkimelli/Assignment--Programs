#include<stdio.h>
/* Check whether a person can vote */
  int main()
{
    int age;
    printf("\n Enter the age:");
    scanf("%d",&age);
    if(age>=18)
       printf("\n Eligible to vote");
    else
       printf("\n Not eligible to vote");   
    return 0;
}