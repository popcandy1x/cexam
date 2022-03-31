#include<stdio.h>

int sumnNatural(int );

int main(){
	int n=0;
	printf("Enter the number of terms upto which you want the sum:");
	scanf("%d",&n);
	printf("%d",sumnNatural(n));
	return 0;
}
int sumnNatural(int a){
	if(a==1)
	{
		return 1;
	}
	return a+sumnNatural(a-1);
}