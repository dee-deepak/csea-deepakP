#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=10;
    int *p=malloc(n);
    if(p==NULL)
    {
        printf("Unable to allocate mem");
        return -1;
    }
    printf("allcoated %d bytes of mem",n);
    printf("\n%p\t%p\t%p",p,p+1,p+2);
    return 0;
}