// given nums = [2, 7, 11, 15]
// target = 9

#include<stdio.h>
#include<stdlib.h>

int h[100];
int hast_table(int, int);
int main()
{
	int value;
	int arr[10], target, i, j, n;
	printf("enter array size(less than 10) - ");
	scanf("%d", &n);
	printf("enter elements - ");
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	for(i=0;i<100;i++)
		h[i] = -1;
	printf("Enter Target Sum: ");
	scanf("%d",&target);
	for(i=0;i<n;i++)
	{
		value = target - arr[i];
		if (value <= 0)
			continue;
		hash_table(value, i);
		if (h[arr[i] % 99] != -1 && h[value % 99] != -1)
		{
			if(arr[h[arr[i] % 99]] + arr[h[value % 99]] == target)
			{
				printf("Indexes are - %d and %d\n", h[arr[i] % 99], h[value % 99]);
			}
		}
	}
	
}

int hash_table(int val, int i)
{
	h[val%99]=i;
}
