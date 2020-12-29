#include "../lb4lib.h"
#include <math.h>

void main ()
{
	int x;
	scanf("%d", &x);
	int t[x][x];
	int tt[x][x];
	dvumass(x, x, t);
	int max = -1;
	int max_len = 1;
	
	for (int i=0; i<x; i++)
	{
		for (int j=0; j<x; j++)
		{
			tt[i][j] = t[j][i];
			int tmp = abs(t[i][j]);
			if (tmp > max)
			{
				max = tmp;
				max_len = 1;
				while (tmp > 0)
				{
					tmp /= 10;
					++max_len;
				}
			}
		}
	}
	
	printf("INPUT%*c|%*cOUTPUT\n", (max_len + 1) * x, ' ', 5, ' ');
	for (int i=0; i<x; i++)
	{
		for (int j=0; j<x; j++)
		{
			printf("%*d ", max_len, t[i][j]);
		}
		printf("     |     ");
		for (int j=0; j<x; j++)
		{
			printf("%*d ", max_len, tt[i][j]);
		}
		printf("\n");
	}
}
