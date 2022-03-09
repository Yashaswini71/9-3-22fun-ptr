#include<stdio.h>
#define len 100

int Swap_two_arr(int [],int [],int );
int main()
{
    int (*fptr)(int [],int [],int);
    int arr[len],b[len],i,n;
    int const *ptr=&n;
    printf("Enter size of two arrays: ");
    scanf("%d",&n);
    printf("Enter elements in an array1: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter elements in an array2: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    fptr=Swap_two_arr;
    fptr(arr,b,n);
    return 0;
}

int Swap_two_arr(int arr1[],int arr2[],int n)
{
    int *const p=arr1;
    int *const q=arr2;
    int i,temp;
    for(i=0;i<n;i++)
    {
        temp=*(p+i);
        *(p+i)=(q+i);
        *(q+i)=temp;
    }
    printf("After swapping elements of array1 and array2: \n");
    printf("array1: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\n");
    printf("array2: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(q+i));
    }
    printf("\n");
    return 0;
}
