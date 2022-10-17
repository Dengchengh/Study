#include<stdio.h>
int main()
{
	float a;
	scanf("%f",&a);
	if(a>=86)
	{
		printf("VERY GOOD\n");
	}else if(a>=60)
	{
		printf("GOOD\n");
	}else
	{
		printf("BAD\n");
	}
return 0;
}