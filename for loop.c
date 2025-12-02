#include<stdio.h>
int main()
{
	int n,i;
	int fact=1;
	printf("enter a number:");
	scanf("%d",&n);
	if(n<0)
	printf(" negative number doesn't exist. \n");
	else
	for(i=1;i<=n;i++)
	fact=i;
	
	return 0;
}
