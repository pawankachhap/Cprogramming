// Insertion sort (descending) using array

#include<stdio.h>

void insertion(int [], int);

int main()
{
    int arr[]={44,2,13,11,5,76};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i;
    printf("Unsorted array : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    insertion(arr,size);

    return 0;
}

void insertion(int arr[], int size)
{
    int i,j,tmp;
    for(i=1;i<size;i++)
    {
        tmp=arr[i];
        j=i-1;

        while(j>=0 && tmp>arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=tmp;
    }
    printf("\nSorted array   : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}