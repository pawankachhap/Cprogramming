// Bubble sort (ascending) using arrays
#include<stdio.h>

void bubble(int [], int);

int main()
{
    int arr[]={5,45,22,6,57,11,23,45,74,33};
    int i, size;
    size = sizeof(arr)/sizeof(arr[0]);    
    printf("Unsorted array : ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    
    bubble(arr,size);   
    
    return 0;
}

void bubble(int arr[], int size)
{
    int i,j,tmp;
    for(i=0;i<size-1;++i)
    {
        for(j=0;j<size-i-1;++j)
        {
            if(arr[j]>arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    printf("\nsorted array : ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}