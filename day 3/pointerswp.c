#include<stdio.h>
void main()
{
    int x=10,y=20;
    int *ptr1,*ptr2,*tmp;
    ptr1=&x;
    ptr2=&y;
    printf("ADDRESSS of ptr1=%p ptr2=%p\n",ptr1,ptr2);
    printf("ptr1=%d ptr2=%d \nSum=%d",*ptr1,*ptr2,*ptr1+*ptr2);
    printf("*\nptr2/*ptr1=%d",*ptr2/(*ptr1));;
    tmp=ptr1;
    ptr1=ptr2;
    ptr2=tmp;
     printf("\nSwapped \nptr1=%d ptr2=%d",*ptr1,*ptr2);
}