#include<stdio.h>

void swap(int *,int *);

int main(){
	int a,b;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	int *ptr,*fpr;
	ptr=&a,fpr=&b;
	swap(ptr,fpr);
	printf("a=%d,b=%d",a,b);
	return 0;
}
void swap(int *c,int *d){
	*c=*c+*d;
	*d=*c-*d;
	*c=*c-*d;
}