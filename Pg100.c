#include<stdio.h>
int main()
{   int n,i,temp,j;
     printf("Enter The Number of elements ?");
     scanf("%d",&n);
     int a[n];
   for(i=0;i<n;i++)
    {  printf("Enter The Element At %d :",(i+1));
        scanf("%d",&a[i]);
    }
for(i=1;i<n;i++)
{
    temp = a[i];
    j=i-1;
    while(a[j]>temp&&j>=0)
    {
        a[j+1] = a[j];
        j--;
    }
    a[j+1] = temp;
}
for(i=0;i<n;i++)
{
 printf("%d ",a[i]);    
}
}