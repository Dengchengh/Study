#include<stdio.h>
int main()
{
	int a,b,sum;
	sum=0;
	scanf("%d",&a);
	for(int i=a;i>0;i--)
	{
		b=1;
		for(int j=i;j>0;j--)
		{
			b=b*j;
		}
		sum=sum+b;
	}
	printf("%d\n",sum);
	return 0;
}