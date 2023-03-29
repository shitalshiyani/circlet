#include<stdio.h>

main()
{
	int r,c;
	
	for (r=5;r>=1;r--)
	{
		for (c=r;c<=15;c++)
		{
			printf("%d",c);
		}
		printf("\n");
	}
}
