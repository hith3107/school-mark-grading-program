#include<stdio.h>
main()
{
	int a;
	printf("enter the marks");
	scanf("%d",&a);
	if (a>=85&&a<=100)
	{
	printf("GradeA");	
	}
	else if(a>=70&&a<=84)
	{
	printf("GradeB");
	}
	else if(a>=55&&a<=69)
	{
	printf("GradeC");
	}
	else if(a>=40&&a<=54)
	{
	printf("GradeD");
	}
	else if(a<40)
	{
	printf("GradeF");
	}
	else
	{
		printf("there is no grade for given mark");
	}
}
