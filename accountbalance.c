#include<stdio.h>

int main(){
	FILE *fp;
	struct accountholder{
		int accountNo;
		int balance;
		char name[80];
	}e1;
	char another='Y';
	fp=fopen("accountbalance.txt","w");
	while(another=='Y')
	{
		printf("Enter the name,account no,balance:");
		scanf("%s %d %d",e1.name,&e1.accountNo,&e1.balance);
		fprintf(fp,"%s\n%d\n%d\n",e1.name,e1.accountNo,e1.balance);
		fflush(stdin);
		printf("Want to enter another account detail:(Y/N):");
		another=getchar();
	}
	return 0;
}