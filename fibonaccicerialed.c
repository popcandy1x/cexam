#include<stdio.h>

int fibonaccicerial(int );

int main(){
	int n=0;
	printf("Enter the number of terms upto which you want to find the series:");
	scanf("%d",&n);
	printf("The series is:");
	for(int i=0;i<=n;i++)
	{
		printf("%d ",fibonaccicerial(i));
	}
	return 0;
}
int fibonaccicerial(int a){
	if(a==0)
	{
		return 0;
	}
	else if(a==1)
	{
		return 1;
	}
	return fibonaccicerial(a-1)+fibonaccicerial(a-2);
}