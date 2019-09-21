//Inserting element in an array
#include<stdio.h>

int main()
{
    int arr[20] = {1,3,5,7,9,11,13,15};
    int key, i,j,UL=7;
    printf("Array:\n");
    for(i=0;i<=UL;i++)
        printf("%d ",arr[i]);
    printf("\nEnter the element to insert : ");
    scanf("%d",&key);
    if(UL == sizeof(arr)/sizeof(arr[0]))
    {
        printf("!!! OVERFLOW !!!");
    }
    else
    {
        for(i=0;i<=UL;i++)
        {
            if(arr[i]>key)
            {
                for(j=UL;j>=i;j--)
                {
                    arr[j+1] = arr[j];
                }
                arr[i] = key;
                break;
            }
        }
        UL = UL + 1;
    }
    
    printf("New array after insertion :\n");
    for(i=0;i<=UL;i++)
        printf("%d ",arr[i]);

    return 0;
}