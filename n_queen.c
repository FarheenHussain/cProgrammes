#include<stdio.h>
#include<math.h>

int row[8];

int check(int R,int C)
{
	int c;
	for(c=0;c<C;c++)
	{
		if(row[c]==R)
		{
			return 0;
		}
		
		if(abs(row[c]-R)==abs(c-C))
		{
			return 0;
		}
	}
	return 1;
}

void backtrack(int c)
{   
	int i,r;
	
	
	if(c==8)
	{
		for(i=0;i<8;i++)
		{
			printf("%d ",row[i]);
		}
		printf("\n");
	return;
	}
	
	for(r=0;r<8;r++)
	{
		if(check(r,c)==1)
		{
			row[c]=r;
			backtrack(c+1);
		}
	}
}


int main()
{
 	backtrack(0);
	return 0;	
}
