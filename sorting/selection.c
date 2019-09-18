//selection sort (ascending) using arrays

#include<stdio.h>

void selection(int [], int);

int main()
{
    int arr[]= {2,1,23,55,33,7,56,87,23};
    int size,i;
    size=sizeof(arr)/sizeof(arr[0]);
    printf("Unsorted array : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    selection(arr,size);
    return 0;
}

void selection(int arr[], int size)
{
    int min,i,j,swap;
    for(i=0;i<size;i++)
    {
        min = i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        swap = arr[i];
        arr[i] = arr[min];
        arr[min]= swap;
    }
    printf("\nSorted array   : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}