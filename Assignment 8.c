#include<stdio.h>
/*Classifies a person's body
  weight by checking their BMI*/
  int main()
{ 
   float ht,wt,x,BMI;
   printf("\n Enter the person's height in meters and weight in kg:");
   scanf("%f%f",&ht,&wt);
   x=ht*ht;
   BMI=wt/x;
   if(BMI<18.5)
       printf("\n The BMI is %.1f and the category is Underweight",BMI);
   else if(BMI>=18.5 && BMI<25)
       printf("\n The BMI is %.1f and the category is Normal",BMI);
   else if(BMI>=25 && BMI<30)  
       printf("\n The BMI is %.1f and the category is Overweight",BMI);  
   else
       printf("\n The BMI is %.1f and the category is Obese",BMI);        
    return 0;
}