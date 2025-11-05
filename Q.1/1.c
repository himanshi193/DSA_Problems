//  1. Find the maximum and minimum element in an array

#include<stdio.h>
#include<limits.h>
int main()
{
    int a[]={2,-9,4,5,-6,8,1};
    int size=sizeof(a)/sizeof(a[0]);
    int i,j;
    int max=INT_MIN;
    int min=INT_MAX;
    for(i=0;i<size;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("Max : %d",max);
    printf("\nMin : %d",min);

}