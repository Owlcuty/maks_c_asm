#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main ()
{
	char x[256], i=0;
	fgets(x, 256, stdin);
	int sum=0;	
	
	while (x[i] != '\0')
	{
		if (x[i] >= '0' && x[i] <= '9') sum += x[i] -'0';
		i++;
	}
	
	printf("%d\n", sum);
}
