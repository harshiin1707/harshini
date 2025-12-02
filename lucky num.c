#include<stdio.h>
int main()
{
	int d,m,y,sum,lucky;
	printf("enter your dd/mm/year");
	scanf("%d%d%d",&d,&m,&y);
	sum=d+m+y;
	lucky=sum%9;
	printf("your lucky number is=%d",lucky);
	return 0;
}
