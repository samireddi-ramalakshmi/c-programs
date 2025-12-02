#include<stdio.h>
#include<math.h>
int main()
{
	int num, rn=0, tnum, rem;
	printf("Enter a number:");
	scanf("%d","&original number");
	// storing original number in temp number
	   tnum = original number;
	// finding out the reverse of the given number
	while(tnum!=0)
	{
		int rem = temp number %10;
		reverse number = reverse number*10+rem;
		tnum = tnum/10;
	}
	// comparing 
	if(original number == reverse number)
	printf("palindrome");
	else
	printf("not a palindrome");
}
