#include <stdio.h>

int main()
{
	int i, size=5, arr[size];
	for(i=0;i<size;i++)
		scanf("%d", &arr[i]);
	for(i=0;i<size;i++)
		printf("%d", arr[i]);
}
