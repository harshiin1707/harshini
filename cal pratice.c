#include<stdio.h>
void main()
{
	int a,b,c;
	char ch;  
	printf("enter a&b values");
	scanf("%d%d",&a,&b);
	printf("enter your choice +add-sub*mul/div");
	scanf(" %c", &ch);
	switch(ch)
	{
		case('+'):c=a+b;
	printf("add=%d",c);
		break;
	 case('-'):c=a-b;
	 printf("sub=%d",c);
	 break;
	 case('*'):c=a*b;
	 printf("mul=%d",c);
	 break;
	 case('/'):c=a/b;
	 printf("div=%d",c);
	 break;
	 defult:printf("invalide choice");
}
}
	 

