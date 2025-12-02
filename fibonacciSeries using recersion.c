#include<stdio.h>
int fib(int n);
int main()
{
	int n,i;
	printf("enter size of series");
	scanf("%d",&n);
	printf("the fibonacci series is =");
	for(i=0;i<=n;i++)
	{
		printf("%d",fib(i));
	}
	return 0;
}
  int fib(int i)
  {
  	if(i<=1)
  	return 1;
  	else
  	return fib(i-1)+fib(i-2);
  }
