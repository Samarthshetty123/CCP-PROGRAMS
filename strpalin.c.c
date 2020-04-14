/***************************************************

PROGRAM TO CHECK WHETHER STRING IS PALINDROME OR NOT 
	
	BY SAMARTH C SHETTY USN 1BM19CS141

***************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
    char string[100],i,endch,flag;
    printf("enter the string :");
    scanf("%s",&string[i]);
    endch=strlen(string)-1;
    for(i=0;i<endch;i++)
    {
        if (string[i] != string[endch-i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Not PALINDROME");
    }
    else
    {
        printf("it is PALINDROME");
    }
    return 0;
}
