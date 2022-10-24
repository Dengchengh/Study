#include<stdio.h>
int main()
{
	int n,m;
	float s,max;
	max=s=0;
	scanf("%d %d",&n,&m);
	int a[n];
	for(int i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<=n-m;i++)
	{
		s=0;
		for(int j=i;j<=i+m-1;j++)
		{
			s=s+a[j];
		}
		s/=m;
		if(s>max)
		{
			max=s;
		}
	}
	printf("%.2f\n",max);
	return 0;
}