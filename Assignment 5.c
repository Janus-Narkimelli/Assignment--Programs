#include<stdio.h>
/* Checks whether a loan
   can be approved or not*/
  int main()
{ 
   int age,income,credit_score;
   printf("\n Enter the age,monthly income and credit score:");
   scanf("%d%d%d",&age,&income,&credit_score);
   if(age>=21 && age<=60)
   {
      if(income>=25000)
      {
         if(credit_score>=700)
            printf("\n Loan approved");
         else   
            printf("\n Loan rejected: credit score below 700");
            
      }
      else 
      {
          printf("\n Loan rejected: income below 25,000");
      }   
   }
   else 
   {
        printf("\n Loan rejected: age not in 21 to 60");
   }
    
                 
    return 0;
}