#include <stdio.h>

main()
{
	int m;
	scanf_s("%d", &m);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}