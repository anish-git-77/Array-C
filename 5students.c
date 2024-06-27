#include<stdio.h>
int main()
{
    int total=0;
    float average;
    int a[5];
    printf("enter the marks:::::");
    for(int i=1;i<=5;i++)
    {
        scanf("%d",a[i]);
    }
    for(int i=1;i<=5;i++)
    total=total+a[i];
    printf("total marks=%d",total);
}