#include<stdio.h>
/*prints a student's grade
  by checking their marks*/
  int main()
{ 
    int marks;
    printf("\n Enter the marks:");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
       printf("\n Invalid marks");
    else if (marks>=90 && marks<=100) 
       printf("\n The grade is:O");
    else if (marks>=80 && marks<=89) 
       printf("\n The grade is:A+"); 
    else if(marks>=70 && marks<=79)
       printf("\n The grade is:A");
    else if(marks>=60 && marks<=69) 
       printf("\n The grade is:B");
    else if(marks>=50 && marks<=59)
       printf("\n The grade is:C");
    else
       printf("\n Fail");      
    return 0;
}