#include<stdio.h>
/* Calculate the total amount 
   a customer has to pay*/
  int main()
{
    int membership;
    float amt,discount,delivery_fee, tot_amt;
    printf ("\n Enter membership type(1 for premium,0 for regular):");
    scanf ("%d",&membership);
    printf("\n Enter the amount:");
    scanf("%f",&amt);
    if(amt>=500 && membership==1)
       discount= amt*0.10;
    else
       discount = 0;
    if(amt>=500)   
        delivery_fee=0;
    else
        delivery_fee=50;
    tot_amt = amt-discount+delivery_fee;
    printf("\n The total amount is:%2f",tot_amt);  
                 
    return 0;
}