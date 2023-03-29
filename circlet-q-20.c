#include<stdio.h>

main()
{
	int r,c,s;
	
	for (r=1;r<=4;r++)
	{
		for (s=1;s<=r;s++)
		{
			printf("  ");
		}
		for (c=4;c<=r;c++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (r=4;r>=1;r--)
	{
		for (s=1;s>=r;s--)
		{
			printf("  ");
		}
		for (c=1;c<=r;c++)
		{
			printf("*");
		}
		printf("\n");
	}
}
