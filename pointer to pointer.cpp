#include<stdio.h>
int main()
{
	int x=10;
	char ch='x';
	void *ptr;
	ptr=&x;//integer address
	printf("value of ptr=%d",*(int*)ptr);
	ptr=&ch;
	printf("\n value of ptr=%c",*(char*)ptr);
	return 0;
}
