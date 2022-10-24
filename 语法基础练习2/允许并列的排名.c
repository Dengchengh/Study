#include<stdio.h>
int main()
{
	int n,b,x;
	scanf("%d",&n);
	b=n-1;
	int s1[b];
	for(int i=0;i<=b;i++)
	{
		scanf("%d",&s1[i]);
	}
	for(int i=0;i<b;i++)
	{
		for(int j=0;j<b-i;j++)
		{
			if(s1[j]<s1[j+1])
			{
				s1[j]=s1[j]+s1[j+1];
				s1[j+1]=s1[j]-s1[j+1];
				s1[j]=s1[j]-s1[j+1];
			}
		}
	}
	for(int i=0;i<b;i++)
	{
		for(int j=i+1;j<=b;j++)
		{
			if(s1[j]==s1[i])
			{
				for(int x=j;x<b;x++)
				{
					s1[x]=s1[x+1];
				}
			}
		}
	}
	scanf("%d",&x);
	for(int i=0;i<=b;i++)
	{
		if(x==s1[i])
		{
			printf("%d",i+1);
			break;
		}
	}
	return 0;
}