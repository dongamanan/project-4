#include<stdio.h>
int main()
{
	int a,b;
	
	for(a=1;a<=5;a++)
	{
		for(b=41;b<41+a;b++)
		{
			printf(" %d",b);
		}
		printf("\n");
	}
}