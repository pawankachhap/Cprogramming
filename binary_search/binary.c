// Binary search using arrays

#include<stdio.h>

int bsearch(int [], int, int);

int main()
{
    int arr[]= {1,2,3,4,5,6,7,8,10}, key;
    int size=sizeof(arr);
    printf("Enter the search key : ");
    scanf("%d",&key);
    int tmp;
    tmp=bsearch(arr,size,key);
    if(tmp==-1)
    printf("Key not found !!!");
    else
    {
        printf("Key (%d) found, index (%d)",key,tmp);
    }
    return 0;
}

int bsearch(int arr[], int size, int key)
{
    int mid,beg=0,end=size-1;
    mid=(int) size/2;
    while(beg<=end)
    {
        if(arr[mid]==key)
        return mid;
        else if(key>arr[mid])
        {
            beg = mid+1;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }
        mid = (int) (end+beg)/2;
    }
    return -1;
}