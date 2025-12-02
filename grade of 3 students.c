#include<stdio.h>
int main()
{
	int s1,s2,s3,total,per;
	printf("enter 3 sub marks");
	scanf("%d%d%d",&s1,&s2,&s3);
	total=s1+s2+s3;
	per=total/3;
	if(s1>=40&&s2>=40&&s3>=40)
	{
		if(per>=90)
	printf("a grade");
	else if(per>=70)
	printf("b grade");
	else if(per>=50)
	printf("c grade");
	else if(per>=40)
	printf("d grade");
	}
	else
	printf("failed");
	return 0;
}
