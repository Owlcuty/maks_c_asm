#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main ()
{
	char x[256];
	scanf("%[^\n]", x);
	int y[256] = { 0 };
	
	for (int i = 0; i < strlen(x); i++)
	{
		++y[x[i]];
	}
	
	for (int i = 1; i < 256; i++) 
	{
		if (y[i])
		{
			printf("%c - %d\n", i, y[i]);
		}
	}
}
