#include<stdio.h>
int main()
{
    int i,j,s=0,n;
    printf("Enter any 5 digit number:");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        j=n%10;
        s+=j;
        n/=10;
    }
    printf("\nresult=%d",s);
    return 0;

}
