#include "lb4lib.h"

void odnmass (int x, int m[])
{
	srand(time(NULL));
	for (int i=0; i<x; i++)
	{
		m[i] = (rand()%199)-99;
	}	
	
	for (int i=0; i<x; i++)
	{
		printf("%d ", m[i]);
	}
	printf("\n");
}

void dvumass (int a, int b, int mm[a][b])
{	

	srand(time(NULL));
	
	for (int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
		{
			mm[i][j] = (rand()%198)-99;
		}
	}

}
