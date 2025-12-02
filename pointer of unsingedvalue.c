#include<stdio.h>
int main()
{
	int a=10,*p;
	p=&a;
	printf("value of a =%d",a);
	printf("\n Adress of a =%u",p);
	printf("\n Adress of p =%u",&p);
	printf("\n value of p=%d",*p);
	return 0;
}

