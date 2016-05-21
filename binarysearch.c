#include <stdio.h>
#include <math.h>

int binarysearch(int key,int a[])
{
	int lo = 0;
	int len = 6;
	while (lo <= len)
	{
		int mid = lo + (len-lo) / 2;
		if ( key > a[mid])
			lo = mid+1;
		else if (key < a[mid])
			len = mid-1;
		else
			return mid;
	}
	return -1;
}

int main()
{
	int num[5];
	printf("please put six number\n");
	int i;
	for (i = 0; i <= 5; i++)
		scanf("%d",&num[i]);
	int resulat = binarysearch(10,num);
	printf("%d\n",resulat);
}
