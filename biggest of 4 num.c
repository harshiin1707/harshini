#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter a&b&c&d values");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b&&a>c&&a>d)
	printf("%d is big",a);
	else if(b>c&&b>d)
	printf("%d is big",b);
	else if(c>d)
	printf("%d is big",c);
	else
	printf("%d is big",d);
	return 0;
}
