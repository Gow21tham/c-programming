#include <stdio.h>
#include <stdlib.h>
int main ()
{
 int fno,sno,*ptr1=&fno,*ptr2=&sno;
 
   printf("\n\n Pointer : Find the maximum number between two numbers :\n"); 
   printf("------------------------------------------------------------\n");   
 
   printf(" Input the first number : ");
   scanf("%d", ptr1);
   printf(" Input the second  number : ");
   scanf("%d", ptr2); 


 if(*ptr1>*ptr2)
 {
  printf("\n\n %d is the maximum number.\n\n",*ptr1);
 }
 if(*ptr1=*ptr2)
 {
  printf("\n\n %d both are same.\n\n",*ptr1=*ptr2);
 }
 else
 {
  printf("\n\n %d is the maximum number.\n\n",*ptr2);
 }

}
