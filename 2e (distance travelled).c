#include<stdio.h>
int main()
{//distance travelled by an object
	float u,a,d;
	int t;
	printf("Enter the vlaue of accleration:");
	scanf("%f",&a);
	printf("Enter the value of initial velocity:");
	scanf("%f",&u);
	printf("Enter the value of time:");
	scanf("%d,&t");
	d=(u*t)+(a*t*t)/2;
	printf("The distane:%2f",d);
	return 0;
}
