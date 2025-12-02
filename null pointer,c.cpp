#include<stdio.h>
int main()
{
	int x=12;
	int*ptr=NULL;
	if(ptr==NULL)
	ptr=&x;
	printf("value of ptr=%d",*ptr);
	return 0;
}
