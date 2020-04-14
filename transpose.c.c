/********************************************
* Program to find the transpose of a matrix

	BY SAMARTH C SHETTY USN 1BM19CS141
********************************************/
 
#include<stdio.h>
#define ROW 2
#define COL 4
 
int main()
{
    int i, j, mat[ROW][COL], trans_mat[COL][ROW];
    
    printf("Enter matrix: \n");
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {            
            scanf("%d", &mat[i][j]);
        }        
    }
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            trans_mat[j][i] = mat[i][j];
        }                
    }       
    for(i = 0; i < COL; i++)
    {
        for(j = 0; j < ROW; j++)
        {
            printf("%d ", trans_mat[i][j]);
        }        
        
        printf("\n");
    }
    return 0;
}