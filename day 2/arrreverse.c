#include<stdio.h>
#include<string.h>
void main()
{
    char str[20],rev[20];
    int len,i;
    printf("Enter string:");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[len-1-i]=='0')
            rev[i]='$';
        else
            rev[i]=str[len-1-i];
    }
    printf("\nReversed and zero replaced..New array:");
    puts(rev);
}