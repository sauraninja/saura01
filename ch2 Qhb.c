#include<stdio.h>
int main()
{
    int i,j,k,r=0;
    printf("Enter any 5 digits number:");
    scanf("%d",&k);
    for(i=0;i<5;i++)
    {
        j=k%10;
        r=r*10+j;
        k/=10;
    }
    printf("\nResult=%d",r);
}
