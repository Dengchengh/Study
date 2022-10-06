#include<stdio.h>
int main()
{
int a,b;
scanf("%3d",&a);
b=a/10;
printf("%d%d%d",a%10,b%10,a/100);
return 0;
}