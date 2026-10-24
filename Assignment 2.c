#include<stdio.h>
/* Calculate the area and perimeter
    of a rectangle */
  int main()
{
    int l,b,area,perimeter;
    printf("\n Enter l and b values:");
    scanf("%d%d",&l,&b);
    area=l*b;
    printf("\n The area is: %d",area);
    perimeter=2*(l+b);
    printf("\n The perimeter is: %d",perimeter);
    return 0;
}