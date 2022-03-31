#include<stdio.h>

int main(){
	int n=0,m=0;
	printf("Enter the number of rows and columuns of first matrix:");
	scanf("%d %d",&n,&m);
	int a[n][m];
	printf("Enter the elements of first matrix:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int k=0,l=0;
	printf("Enter the number of rows and columuns of second matrix:");
	scanf("%d %d",&k,&l);
	int b[k][l];
	printf("Enter the elements of second matrix:\n");
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<l;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if(k!=m)
	{
		printf("Matrix multiplication not possible\n");
	}
	else
	{
		int c[n][l];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<l;j++)
			{
				c[i][j]=0;
				for(int d=0;d<m;d++)
				{
					c[i][j]+=a[i][d]*b[d][j];
				}
			}
		}
		printf("The product matrix is:");
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<l;j++)
			{
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}