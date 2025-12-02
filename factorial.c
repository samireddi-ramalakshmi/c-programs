#include<stdio.h>
int fact(int);
int main()
{
	int x,n;
	printf(" enter the number to find factorial :");
	scanf("%d",&n);
	x=fact(n);
	printf("factorial of %d is %d",n,x);
	return 0;
}
