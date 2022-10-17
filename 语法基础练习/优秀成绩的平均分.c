#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	float a[n-1],temp;
	for(int i=0;i<=n-1;i++)
	{
		scanf("%f",&a[i]);
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<n-i;j++)
			if(a[j]<a[j+1]){
			temp=a[j+1];
			a[j+1]=a[j];
			a[j]=temp;
			}
	temp=0;
	for(int i=0;i<=4;i++){
		temp=temp+a[i];
		}
	printf("%.1f\n",temp/5.0);
}