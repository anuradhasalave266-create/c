#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,size=5;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("the elements of the array are:\n");
    for(i=0;i<n;i++)
    {
     printf("%d",arr[i]);   
    }
    getch();
}