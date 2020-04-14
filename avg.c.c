/********************************************************

      PROGRAM TO FIND AVERAGE OF AN ARRAY 
	
	BY SAMARTH C SHETTY USN 1BM19CS141
      
********************************************************/
#include<stdio.h>
int main()
{
    int i , n , avg , a[20] , sum=0;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    avg=sum/n;
    printf("\n Average is %d",avg);
    return 0;
}
    