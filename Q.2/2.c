//reverse an array in place

#include<stdio.h>
int main()
{
    int a[]={2,-9,4,5,-6,8,1};
    int size=sizeof(a)/sizeof(a[0]);
    int i,j;

    // First Approach :
    // for(i=0,j=size-1;i<j;i++,j--)
    // {
    //     int t=a[i];
    //     a[i]=a[j];
    //     a[j]=t;
    // }

    // Second Approach
    for(i=0;i<size/2;i++)
    {
        int t=a[i];
        a[i]=a[size-i-1];
        a[size-i-1]=t;
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }

}