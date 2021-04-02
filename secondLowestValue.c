#include<stdio.h>
int main()
{
   int n,a[50],i,min1,min2;
   scanf("%d",&n);

   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    min1=a[0];

   for(i=0;i<n;i++){
    if(a[i]<min1)
        min1=a[i];
   }

   for(i=0;i<n;i++)
   {
       if(a[i]>min1)
       {
           min2=a[i];
           break;
       }
   }

   for(i=0;i<n;i++)
   {
       if(a[i]>min1&&a[i]<min2)
       {
           min2=a[i];
       }
   }

   printf("%d\n",min1);
   printf("%d\n",min2);
    return 0;
}

