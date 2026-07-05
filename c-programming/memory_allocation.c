//malloc() program
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n, i;

    printf("Enter size: ");
    scanf("%d",&n);

    ptr = (int*)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&ptr[i]);

    printf("Elements are:\n");
    for(i=0;i<n;i++)
        printf("%d ",ptr[i]);

    free(ptr);

    return 0;
}


//calloc() program
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n, i;

    printf("Enter size: ");
    scanf("%d",&n);

    ptr = (int*)calloc(n,sizeof(int));

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&ptr[i]);

    printf("Elements are:\n");
    for(i=0;i<n;i++)
        printf("%d ",ptr[i]);

    free(ptr);

    return 0;
}


//realloc() program
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n, m, i;

    printf("Enter initial size: ");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&ptr[i]);

    printf("Enter new size: ");
    scanf("%d",&m);

    ptr=(int*)realloc(ptr,m*sizeof(int));

    printf("Enter new elements:\n");
    for(i=n;i<m;i++)
        scanf("%d",&ptr[i]);

    printf("All elements:\n");
    for(i=0;i<m;i++)
        printf("%d ",ptr[i]);

    free(ptr);

    return 0;
}


//free() program
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr=(int*)malloc(sizeof(int));

    *ptr=100;

    printf("Value = %d\n",*ptr);

    free(ptr);

    printf("Memory released successfully.");

    return 0;
}