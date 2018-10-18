#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int arr[N];
	int i,j;
	
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d",arr[(i+j)%N]);
		}
		printf("\n");
	}
	return 0;
}
