//program to enter array elements > from keyboard & // print them
#include<stdio.h>
main()
{
	int i,marks[6];
	printf("enter array elements");
	for(i=0;i<6;i++)
	{
		scanf("%d",&marks[i]);
	}
	printf("the array elements are:\n");
	for(i=0;i<6;i++)
	{
		printf("%d\t",marks[i]);
	}
}
