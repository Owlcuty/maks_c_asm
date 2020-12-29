#include <stdio.h>
#include <math.h>

void main ()
{
	int n = 0, x = 0;
	double W = 0, pW = 0, tmpW = 0;
	scanf ("%d %d", &x, &n);
	int last_k = 3;
	pW = 4.0 / (-2 * pow(x, 3));
	W = pW;
	tmpW = pW;
	
	for (int k = 4; k <= n; k++)
	{
		pW *= -2;
		pW /= x;
		tmpW = pW * (last_k - 5) / (k - 5);
		if ((tmpW != 0) && (finite(tmpW) != 0))
		{
			pW = tmpW;
			W += pW;
			last_k = k;
		}
	}

	double P = 1;
	double pp = 1;

	for (int i = 1; i <= n + 7; i++)
	{
		pp = (pow(i, 3) - 27) / (i - 7);
		if ((pp != 0) && (finite(pp) != 0))
		{
			P *= pp;
		}
	}

	double res = P * W;

	printf("s = %lf\n", res);
}

