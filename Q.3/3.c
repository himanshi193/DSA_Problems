//  Find the 'Kth' max and min element of an array

#include<stdio.h>
int main()
{
    int a[]={2,-9,4,5,-6,8,1};
    int size=sizeof(a)/sizeof(a[0]);
    int i,j,k;

    printf("The Array : ");
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
            
        }
    }
    
    
    for(k=0;k<=0;)
    {
        printf("\n\nEnter the value of K : ");
        scanf("%d",&k);
        if(k<=0)
        {
            printf("\nK should be greater than 0");
        }
    }
    

    printf("\nThe Kth max element : %d",a[size-k]);
    printf("\nThe Kth min element : %d",a[k-1]);
}