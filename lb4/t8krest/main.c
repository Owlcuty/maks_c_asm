#include "../lb4lib.h"
#include <string.h>

void main ()
{
	int n = 0, m = 0, raz = 0, su = 0, sv = 0, scur = 0;
	scanf("%d %d", &n, &m);
	int mtrx[n][m];
	dvumass(n, m, mtrx);

	int dpu[n][m];
	int dpv[n][m];
	memset(dpu, 0, n * m * sizeof(int));
	memset(dpv, 0, n * m * sizeof(int));

	for (size_t y = 0; y < n; ++y)
	{
		for (size_t x = 0; x < m; ++x)
		{
			printf("%d ", mtrx[y][x]);
		}
		putc('\n', stdout);
	}

	for (size_t y = 1; y < n - 1; ++y)
	{
		for (size_t x = 1; x < m - 1; ++x)
		{
			char is_seq = 0;
			if (dpu[n][m] == 0)
			{
				scur = mtrx[y][x];
				is_seq = 0;
				for (size_t z = 1; y - z >= 0 && x - z >= 0 &&
							   y + z < n  && x + z < m; ++z)
				{
					if (!dpu[y - z][x] && mtrx[y - z][x] < mtrx[y - z + 1][x] &&
						!dpu[y + z][x] && mtrx[y + z][x] < mtrx[y + z - 1][x] &&
						!dpu[y][x - z] && mtrx[y][x - z] < mtrx[y][x - z + 1] &&
						!dpu[y][x + z] && mtrx[y][x + z] < mtrx[y][x + z - 1])	
					{
						is_seq = 1;
						scur += mtrx[y - z][x] +
							   mtrx[y + z][x] +
							   mtrx[y][x - z] +
							   mtrx[y][x + z];
						dpu[y - z][x] = 1;
						dpu[y + z][x] = 1;
						dpu[y][x - z] = 1;
						dpu[y][x + z] = 1;
					}
					else
						break;
				}
				if (is_seq)
				{
					su += scur;
					dpu[y][x] = 1;
				}
			}
			if (dpv[n][m] == 0)
			{
				scur = mtrx[y][x];
				is_seq = 0;
				for (size_t z = 1; y - z >= 0 && x - z >= 0 &&
							   y + z < n  && x + z < m; ++z)
				{
					if (!dpv[y - z][x] && mtrx[y - z][x] > mtrx[y - z + 1][x] &&
						!dpv[y + z][x] && mtrx[y + z][x] > mtrx[y + z - 1][x] &&
						!dpv[y][x - z] && mtrx[y][x - z] > mtrx[y][x - z + 1] &&
						!dpv[y][x + z] && mtrx[y][x + z] > mtrx[y][x + z - 1])	
					{
						is_seq = 1;
						scur += mtrx[y - z][x] +
							   mtrx[y + z][x] +
							   mtrx[y][x - z] +
							   mtrx[y][x + z];
						dpv[y - z][x] = 1;
						dpv[y + z][x] = 1;
						dpv[y][x - z] = 1;
						dpv[y][x + z] = 1;
					}
					else
						break;
				}
				if (is_seq)
				{
					sv += scur;
					dpv[y][x] = 1;
				}
			}
		}
	}

	raz = sv - su;

	printf("%d\n", raz);
}
