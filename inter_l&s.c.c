/*****************************************************
    PROGRAM TO INTERCHANGE LARGEST AND SMALLEST NOS 
	BY SAMARTH C SHETTY USN 1BM19CS141

******************************************************/

#include <stdio.h>

int main()
{
    int large, small , arr[50],i,n,temp;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    printf("enter the array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    large=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    printf("\n large is %d",large);
    small=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<small)
        {
            arr[i]=small;
        }
    }
    printf("\n small is %d",small);
    temp=large;
    large=small;
    small=temp;;
    printf("\n After interchanging large is %d and small is %d",large,small);
    return 0;
}
