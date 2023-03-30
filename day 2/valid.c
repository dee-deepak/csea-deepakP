#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char str[20];
    printf("Enter:");
    gets(str);
    int len=strlen(str);
    int i,s=0;
    for(i=0;i<len;i++)
    {
        if(str[i]=='*')
        {
            s++;
        }
        else if(str[i]=='#')
            s--;
        else
        {
            printf("invalid input");
            exit(0);
        }
    }
    printf("value: %d",s);
}