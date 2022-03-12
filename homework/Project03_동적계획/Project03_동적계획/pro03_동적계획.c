#include <stdio.h>
#define NODE 5
#define INF 10000 //³ëµå °¹¼ö


int F[NODE][NODE];


int D[NODE][NODE] =
{
	{0, 5, INF, 7, 5},
	{INF, 0, 4, INF,3 },
	{1, 2, 0, INF, INF},
	{INF, INF, 5, 0, INF},
	{4, INF, INF, 8, 0},
};

void Floyd()
{
	// Initialize
	for (int i = 0; i < NODE; ++i)
	{
		for (int j = 0; j < NODE; ++j)
		{
			F[i][j] = D[i][j];
		}
	}

	for (int k = 0; k < NODE; ++k)
	{
		for (int i = 0; i < NODE; ++i)
		{
			for (int j = 0; j < NODE; ++j)
			{
				if (F[i][j] > F[i][k] + F[k][j])
				{
					F[i][j] = F[i][k] + F[k][j];
					D[i][j] = k;
				}
			}
		}

		// print 
		printf("k = %d \n", k);

		for (int i = 0; i < NODE; i++)
		{
			for (int j = 0; j < NODE; j++)
			{
				if (F[i][j] == INF)
				{
					char* infString = "INF";
					printf("%-6s", infString);
					continue;
				}

				printf("%-5d ", F[i][j]);
			}
			puts("");
		}
		puts("");
	}
}

int main()
{
	Floyd();

	system("pause");
	return 0;
}