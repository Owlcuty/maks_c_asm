// Не готово.
#include <stdio.h>
#include <math.h>

void main ()
{
	int n = 0, x = 0;
	double W = 0, pW = 0, tmpW = 0;
	scanf ("%d %d", &x, &n);
	pW = 4.0 / (-2 * pow(x, 3));
	W = pW;
	tmpW = pW;
	int last_k = 3;
	double pp = 0;
	
	for (int k = 4; k <= n; k++)
	{
		pW *= -1;
		pW /= x;
		tmpW = pW * (last_k - 5) / (k - 5);

		pp = (1.0 - 27) / (1 - 7);
		double tmpp = pp;
		for (int i = 2; i <= k + 7; i++)
		{
			tmpp = pp * (pow(i, 3) - 27) / (i - 7);
			if (tmpp != 0 && finite(tmpp) != 0)
			{
				pp = tmpp;
				tmpW *= pp;
			}
		}

		if ((tmpW != 0) && (finite(tmpW) != 0))
		{
			pW = tmpW;
			W += pW;
			last_k = k;
		}


	}

	printf("%lf\n", W);
}

