#include<stdio.h>
/*validates a login if user ID is 101
  and password is 4321*/
  int main()
{ 
   int id,password;
   printf("\n Enter the User ID:"); 
   scanf("%d",&id);
   if(id==101)
   {
      printf("\n Enter the password:");
      scanf("%d",&password);
      if(password==4321)
          printf("\n Login successful");
      else
          printf("\n Incorrect password");
   } 
   else
       printf("\n User not found");             
    return 0;
}