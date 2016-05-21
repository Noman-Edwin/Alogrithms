#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("%s  usage : <argumeng>\n",argv[0]);
		return 0;
	}

	int isprimer(int n)
	{
		if(n < 2)
		perror("usage : <argument>");
		int i;
		for ( i = 2; i * i<=n; i++)
		{
			if (n % i == 0)
				return 0;
		}
		return 1;
	}
	int n = atoi(argv[1]);
	if (isprimer(n))
		printf("%d is prime\n",n);
	else
		printf("%d is not prime\n",n);
}
