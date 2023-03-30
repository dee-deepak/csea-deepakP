#include<stdio.h>
int checkprime(int x)
{
    if(x<2)
        return 0;
    int i;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}
void main()
{
    int str[20],len,i,sum=0;
    printf("Enter size:");
    scanf("%d",&len);
    printf("Enter values:");
    for(i=0;i<len;i++)
    {
        scanf("%d",&str[i]);
    }
    printf("\nArray:");
    for(i=0;i<len;i++)
    {
        printf("%d ",str[i]);
        sum+=str[i];
    }
    printf("\nsum=%d",sum);
    if(checkprime(sum))
        printf("\nsum is prime");
    else    
        printf("\nsum is not prime");
}