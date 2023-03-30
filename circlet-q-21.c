#include<stdio.h>

main()
{
	int r,c,number=1;
	
	for (r=1;r<=5;r++)
	{
		for (c=1;c<=r;c++)
		{
			printf("%d",number);
			number++;
		}
		printf("\n");
	}
}
