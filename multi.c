// Program to calculate the sum of 2×2 matrix.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[2][2],b[2][2] ,i, j;
    int c[2][2];

    printf("Enter the 4 elements of matrix  :\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
     printf("Enter the 4 elements of matrix  :\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    


    printf("\nThe matrix is : \n");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }
    printf("\nThe matrix is : \n");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", b[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            c[i][j]= a[i][j] +b[i][j] ;
            
        }
    }
     printf("\nDeterminant of 2X2 matrix: %d", c[i][j]);
    




    

    getch();
}