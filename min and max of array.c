#include <stdio.h>

int main()
{
    int a[100], n, i,max,min;

    printf("Enter array size");
    scanf("%d",&n);
	printf("Enter array values");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=1;i<n;i++)
    min=max=a[0];
    {
     if(min>a[i])
     min=a[i];
     else if (max<a[i])
     max=a[i];
	}
	printf("minimum value=%d",min);
	printf("\nmaximum value=%d",max);

    return 0;
}
