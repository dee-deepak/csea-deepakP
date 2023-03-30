#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char *ptr;
    ptr=(char *)malloc(10);
    strcpy(ptr,"Programming");
    printf("%s,Address = %u\n",ptr,ptr);
    
    ptr=(char *)realloc(ptr,20);
    strcat(ptr," in c");
    printf("%s,Address = %u\n",ptr,ptr);
    free(ptr);
}