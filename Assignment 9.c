#include<stdio.h>
/*Check whether a given character 
  is a vowel or not*/
  int main()
{ 
   char ch;
   printf("\n Enter the alphabet:");
   scanf("%c",&ch);
   if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
      printf("\n %c is vowel",ch);
   else
      printf("\n %c is not a vowel",ch);   
    return 0;
}