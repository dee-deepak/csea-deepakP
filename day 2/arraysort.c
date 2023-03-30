#include<stdio.h>
void main()
{
    int str[20],len,i,j,temp;
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
    }

    for(i=0;i<len-1;i++)
    {
        for(j=0;j<len-i-1;j++)
        {
            if(str[j]>str[j+1])
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    printf("\nSorted Array:");
    for(i=0;i<len;i++)
    {
        printf("%d ",str[i]);
    }
}