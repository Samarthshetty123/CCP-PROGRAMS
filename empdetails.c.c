/**************************************************

Program to input Employee details using structures

	BY SAMARTH C SHETTY USN 1BM19CS141

**************************************************/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    struct Employee
    {
        char name[100];
        int eno;
        float salary;
        char gender[2];
        char martial_status[12];
    }emp;
    
    printf("Employee name : \n");
    scanf("%s",&emp.name);
    printf("Gender : \n ");
    scanf("%s",&emp.gender);
    printf("enter the salary : \n");
    scanf("%f",&emp.salary);
    printf("Martial status : \n");
    scanf("%s",&emp.martial_status);
    printf("Employee number : \n ");
    scanf("%d",&emp.eno);
    printf("Feed the your data ");
    printf("\n Name:%s\t",emp.name);
    printf("\t\n Salary:%f",emp.salary);
    printf("\t\n Gender:%s",emp.gender);
    printf("\t\n Employee no:%d",emp.eno);
    printf("\t\n Martial status:%s",emp.martial_status);
    return 0;
}
