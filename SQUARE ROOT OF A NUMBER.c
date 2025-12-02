#include<stdio.h>
#include<stdio.h>
int main()
{ // Square Root of a given number
	double num,root;
	//Input
	printf("Enter an integer:");
	scanf("%lf",&num);
	root= sqrt(num);
	printf("The Square Root of %.2lf is %2lf.",num,root);
	return 0;
	
}
