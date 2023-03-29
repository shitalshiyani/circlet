#include<stdio.h>

main()
{
	int r,c;
	char A,B,C,D,E;
	
	for (r='A';r<='E';r++)
	{
		for (c=r;c>='A';c--)
		{
			printf("%c",r);
		}
		printf("\n");
	}
}
