#include<stdio.h>
int main()
{
	int a,b,number=5,d;
	
	for(a=number;a>=1;a--)
	{
		for(d=a-1;d>=1;d--)
		{
			printf("  ");
		}
		for(b=a;b<=5;b++)
	     {
	     	printf(" %d",b);
	     	
		 }
		 for(b=number-1;b>=a;b--)
		{
			printf(" %d",b);
		}
		printf("\n");
	}
	
}