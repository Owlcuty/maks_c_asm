#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void calc_dnums(size_t range)
{
	int *dp = (int*)calloc(range + 1, sizeof(int));
	if (dp == NULL)
	{
		perror("dp fail: ");
		return;
	}

	for (size_t i = 1; i <= range / 2; ++i)
	{
		for (size_t j = i * 2; j <= range; j += i)
		{
			dp[j] += i;
		}
	}

	size_t cnt = 1;
	for (size_t i = 220; i <= range; ++i)
	{
		if (i < dp[i] && i != dp[i] && dp[i] < range && i == dp[dp[i]])
		{
			printf("%d:: %d %d\n", cnt++, i, dp[i]);
		}
	}

};

void main ()
{
	int n = 100000000;
	
	calc_dnums(n);
}
