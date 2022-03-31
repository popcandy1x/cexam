#include<stdio.h>
#include<stdlib.h>

int main(){
	int n=0;
	printf("Enter the length of the array that you want to enter:");
	scanf("%d",&n);
	int *ptr;
	ptr=(int *)calloc(n,sizeof(int));
	int t=0;
	if(ptr==NULL)
	{
		printf("Space Insufficient to allocate memory\n");
		exit(0);
	}
	else
	{
		printf("Enter the array elements:");
		for(int i=0;i<n;i++)
		{
			scanf("%d",ptr+i);
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(ptr[i]>ptr[j])
				{
					t=ptr[i];
					ptr[i]=ptr[j];
					ptr[j]=t;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			printf("%d ",ptr[i]);
		}
	}
	return 0;
}