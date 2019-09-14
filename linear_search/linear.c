// C program to implement linear search using arrays

#include<stdio.h>

//Linear search function
int linsearch(int arr[], int size, int key)
{
    int j;
    for(j=0; j<size; ++j)
    {
        if(arr[j]==key) return j;
    }

    return -1;
}

int main()
{
    int arr[50], size, key, i, found=-1;
    printf("Enter the size of array (<=50) : ");
    scanf("%d",&size);
    printf("Enter the elements of array : \n");
    for(i=0;i<size;++i)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the search key : ");
    scanf("%d",&key);

    found = linsearch(arr,size,key);

    if(found == -1)
    {
        printf("Key %d not found in the array !!!",key);
    }
    else
    {
        printf("key %d found at index no. %d",key,found);
    }
    
    return 0;
}