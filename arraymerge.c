#include<stdio.h>
main()
{
int i,m,n,a[20],b[20],c[40];
printf("Enter the number of elements in array 1 nd array2: ");
scanf("%d%d",&m,&n);
printf("Enter %d elements in arr1\n",m);
for(i=0;i<m;i++)
    scanf("%d",&a[i]);
printf("Enter %d elements inn arr2\n",n);
for(i=0;i<n;i++)
    scanf("%d",&b[i]);
for(i=0;i<m+n;i++)
{
    if(i<m)
        c[i]=a[i];
    else
        c[i]=b[i-m];
}
printf("Merged array is\n");
for(i=0;i<m+n;i++)
    printf("%d ",c[i]);
}
