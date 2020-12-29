#include <stdio.h>
#include <math.h>

void main ()
{
	size_t n = 1000000000, pi, pk=0, ppi;
	
	for (size_t i = 0; i <= n; i++)
	{
		pi = i * i;
		pk = pi;
		unsigned int len = 0;
		while (pk > 0)
		{
			++len;
			pk /= 10;
		}
		
		char is_pal = 1;
		size_t now_l = (size_t)pow(10, len);
		size_t now_r = 1;
		for (int j = 0; j < len / 2; j++)
		{
			if (!now_l)
			{
				
			}
			now_l /= 10;
			if (pi / now_l % 10 != pi / now_r % 10)
			{	
				is_pal = 0;
				break;
			}
			now_r *= 10;
		}
		if (is_pal)
		{
			printf("%ld %ld\n", i, pi);
		}
	}
}
