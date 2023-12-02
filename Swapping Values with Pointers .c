//*Swapping Values with Pointers*: Create a program that swaps the values of two variables using pointers, without using a temporary variable.
#include<stdio.h>
int main()
{

int x=5,y=4;
printf("Before swaping :\nx=%d\ny=%d",x,y);


int *ptr1,*ptr2;
ptr1=&x;
ptr2=&y;


//swaping 
*ptr1=*ptr1+*ptr2;
*ptr2=*ptr1-*ptr2;
*ptr1=*ptr1-*ptr2;

printf("\nAfter swaping :\nx=%d\ny=%d",x,y);


  return 0;
}
