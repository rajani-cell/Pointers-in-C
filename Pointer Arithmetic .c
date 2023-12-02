//*Pointer Arithmetic*: Write a program that demonstrates pointer arithmetic, such as incrementing and decrementing pointers, and accessing elements in an array using pointers.
#include<stdio.h>
int main()
{

int arr[5]={1,2,3,4,5};
int *ptr=&arr[0];

*ptr++;
printf("Increment =%d\n",*ptr);

*ptr--;
printf("Dcriment =%d\n",*ptr);

*ptr=*ptr+2;
printf("Acessing element =%d\n",*ptr);


  return 0;
}
