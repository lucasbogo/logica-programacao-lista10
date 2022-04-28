#include <stdio.h>


int main(void)
{

    int i, j, matrix[5][5], row, col;
    int sum = 0;
   

        printf("Enter the number of Rows >> ");
        scanf("%d", &row);
 
        printf("\nEnter the number of Columns >> ");
        scanf("%d", &col);
 
        //Accept the Elements in m x n Matrix
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                printf("\nEnter the Element a[%d][%d] : ", i, j);
                scanf("%d", &matrix[i][j]);
            }
        }
 
        //Addition of all Diagonal Elements
        for (i = 0; i < row; i++) 
        {
            for (j = 0; j < col; j++) 
            {
                if (i == j)
                
                    sum = sum + matrix[i][j];
            }       
        }    
            
 
        //Print out the Result of the sum of diagonal elements
        printf("\nSum of Diagonal Elements in Matrix is: %d", sum);

    return 0;
}