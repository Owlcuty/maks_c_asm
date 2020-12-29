#include <stdio.h>
#include <math.h>
#include <string.h>

void main ()
{
	char x[256];
	fgets(x, 256, stdin);
	unsigned int len = strlen(x);

	for(int i = 0; i < len; i++)
	{
		if ((x[i] >= 'a') && (x[i] <= 'z'))
		{
			x[i] += 'A' - 'a';
		}
	}

	if (len >= 3 && x[0] == 'H' && x[1] == 'I' && x[2] == '!')
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	
}
