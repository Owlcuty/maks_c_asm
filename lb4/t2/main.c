#include "../lb4lib.h"

void main ()
{
	int x = 19, sum = 0, otr=0;
	int t[x];
	odnmass(x, t);
	
	for (int i=0; i<x; i++)
	{
		if (t[i]>=0)
		{
			sum += t[i];
		}
		else
		{
			otr += 1;
			break;
		}
	}
	
	if (otr == 0)
	{
		printf("Нет отрицательных чисел");
	}
	if (otr == 1)
	{
		printf("%d", sum);
	}
}
