#include<stdio.h>

int main()
{
	freopen("input.txt","r",stdin);
	int ovt=0,i,j,p1,p2,car,n,t;
	
	scanf("%d",&n);
	
	int a[n],b[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);	
	}
	
	for(i=0;i<n;i++)
	{
		car=b[i];
		p2=i+1;
		
		for(j=0;j<n;j++)
		{
			if(car==a[j])
			{
				break;
			} 
		}
		p1=j+1;
		
		t=a[p1-1];
	
		for(j=p1-1;j>p2-1;j--)
		{
			a[j]=a[j-1];
			ovt++;
		}
		a[p2-1]=t;
	}
	
	
	
	printf("%d",ovt);

	return 0;
}
