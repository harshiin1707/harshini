//To the given number is pallindrome or not
#include<stdio.h>
int main()
{
	int n,rem,rev=0,temp;
	printf("Enter a number");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(temp==rev)
	printf("%d is pallindrome",temp);
	else
	printf("%d id not pallindrome",temp);
	
	return 0;	
}
