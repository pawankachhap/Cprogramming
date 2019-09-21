//Deleting an element from the array

#include<stdio.h>

int linsearch(int arr[], int size, int key)
{
    int j;
    for(j=0; j<size; ++j)
    {
        if(arr[j]==key) return j;
    }

    return -1;
}

int deletearray(int arr[], int pos, int key, int UL)
{
    int i,j;
    for(i=pos;i<=UL;i++)
    {
        arr[i]=arr[i+1];
    }

    UL = UL - 1;
    return UL;
}
int main()
{
    int arr[20]= {1,3,5,7,9,11,13,15};
    int i,pos,key,UL=7;
    printf("Array:\n");
    for(i=0;i<=UL;i++)
        printf("%d ",arr[i]);
    printf("\nEnter the element to delete : ");
    scanf("%d",&key);
    pos = linsearch(arr,UL+1,key);
    if(pos == -1)
    {
        printf("\nElement not found !!!");
    }
    else
    {
        UL=deletearray(arr,pos,key,UL);
        printf("\nNew Array:\n");
        for(i=0;i<=UL;i++)
        printf("%d ",arr[i]);
    }

    return 0;
}