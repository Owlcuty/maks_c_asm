#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main ()
{
	char x[256], i = 0;
	gets(x);
	int sum = 0, n = 0;	
	
	for(char *s = x; *s; s++)
	{
		if (*s >= '0' && *s <= '9')
		{
			n = n * 10 + (*s - '0');
		}
		else
		{
			sum += n;
			n = 0;
		}
	}
	if (n != 0)
	{
		sum += n;
	}
	
	printf("%d\n", sum);
}
