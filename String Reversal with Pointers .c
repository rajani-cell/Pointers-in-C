//*String Reversal with Pointers*: Write a program to reverse a string using pointers.
#include<stdio.h>
#include<string.h>
int main()
{

  char str1[20];
  printf("Enter string :");
  gets(str1);

  int len=strlen(str1);

  char *start=str1;
  char *end=str1+len-1;

  while(start<=end)
  {
     char temp=*start;
     *start=*end;
     *end=temp;



     *start++;
     *end--;



  }

  printf("Reverse string = %s",str1);



  return 0;
}
