#include<stdio.h>
int main()
{
    int a[5],b[5],i;
    printf("enter 5 numbers");
    for(i=0;i<=5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=5;i++)   
       b[i]=a[i];
        for(i=1;i<=5;i++)
        printf("%d",b[i]);
    


     printf("%d\n",a[i]);
     printf("%d\n",b[i]);
     return 0;
  }