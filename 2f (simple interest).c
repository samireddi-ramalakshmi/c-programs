#include<stdio.h>
#include<math.h>
int main()
{//calculate simple interest and compound interest
	float p,t,r,si,ci;
	printf("Enter principle amount(p):");
	scanf("%f",&p);
	printf("Enter time in year(t):");
	scanf("%f",&t);
	printf("Enter rate in precent(r):");
	scanf("%f",&r);
	/*calculating simple interest*/
	si=(p*t*r)/100.0; 
	/*calculating compound interest*/
	ci=p*(pow(1+r/100,t)-1);
	printf("simple interest=%0.3f\n",si);
	printf("compound interest=%0.3f",ci);
	return 0;
}
