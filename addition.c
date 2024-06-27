#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3],b[3][3],c[3][3];
    printf("enter the elements of 1st");
   
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)

        {
             
            scanf("%d",&a[i][j]);
        }
    }
        printf("enter the elements of 2nd:");
   
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)

        {
             
            scanf("%d",b[i][j]);
        }

    }
    printf("result matrix:");
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)

        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d",c[i][j]);
        }
    }

    
}