//move all negative numbers to beginnig and positive to end 
// Method 1 
#include<stdio.h>
int main(){
    int arr[]={1,-2,3,-4,-5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int left = 0, right=n-1;

    while (left<=right){\
    if(arr[left]<0){
        left++;
    }
    else if (arr[right]>=0){
        right--;
    }
    else{
        //swap
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    }
    
    printf("Array after rearranging:\n");
    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
    }
    return 0;
    
}

//Method 2
#include<stdio.h>
int main(){
    int arr[]={1,-2,3,-4,-5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp[n];
    int j = 0;

    for(int i=0; i<n; i++){
        if(arr[i]<0){
            temp[j++]=arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]>=0){
            temp[j++]=arr[i];
        }
    }
    for(int i=0; i<n; i++){
        arr[i]=temp[i];
    }
    printf("Array after rearranging:\n");
    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
    }
}

