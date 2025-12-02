#include <stdio.h>

int main()
{
    int a[100], n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array values:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nDisplay array values:\n");
    for (i = 0; i < n; i++)
    {
        printf("\n%d %d %u", i, a[i], &a[i]);
    }

    return 0;
}
