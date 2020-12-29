#include "../lb4lib.h"

void sort(int l, int *ll)
{
	int vr=0;

	for (int i = 0; i < l - 1; i++)
	{
		for (int j = (l - 1); j > i; j--)
		{
			if (ll[j - 1] > ll[j])
			{
				vr = ll[j - 1];
				ll[j - 1] = ll[j];
				ll[j] = vr;
			}
		}
	}
}

void main ()
{
	int x, y, z, i=0, j=0, k=0;
	scanf("%d %d", &x, &y);
	z = x+y;
	int t[x], h[y], s[z];
	odnmass(x, t);
	odnmass(y, h);
	
	sort(x, t);
	sort(y, h);
	
	
	while ((i<x)&&(j<y))
	{
		if (t[i]<h[j])
		{
			s[k++] = t[i++];
		}
		else
		{
			s[k++] = h[j++];
		}
	}
	while (i<x)
	{
		s[k] = t[i];
		i += 1;
		k+=1;
	}
	while (j<y)
	{
		s[k] = h[j];
		j += 1;
		k+=1;
	}
	
	for (int i=0; i<z; i++)
	{
		printf("%d ", s[i]);
	}
}
