#include <stdio.h>
#include <math.h>

void main ()
{
	int k = 0;
	double W = 0, pW = 0, tmpW = 0;
	scanf ("%d", &k);
	pW = 1.0 / (2 * -6);
	W = pW;
	tmpW = pW;
	int last_i = -2;
	
	for (int i = -1; i <= k; i++)
	{
		pW *= i + 3;
		pW *= -1;
		tmpW = pW * (last_i - 4) / (i - 4);
		if ((tmpW != 0) && (finite(tmpW) != 0))
		{
			pW = tmpW;
			W += pW;
			last_i = i;
		}
	}
	printf("%lf\n", W);
}

