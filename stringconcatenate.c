#include<stdio.h>

int main(){
	char ch[100],dh[100];
	printf("Enter the first String:");
	gets(ch);
	printf("Enter the second String:");
	gets(dh);
	int k=0,l=0;
	for(int i=0;ch[i]!='\0';i++)
	{
		k++;
	}
	for(int i=0;dh[i]!='\0';i++)
	{
		l++;
	}
	char fh[k+l];
	int e=0;
	for(int i=0;ch[i]!='\0';i++)
	{
		fh[i]=ch[i];
	}
	for(int i=k;i<(l+k);i++)
	{
		fh[i]=dh[e];
		e++;
	}
	fh[l+k]='\0';
	printf("%s",fh);
	return 0;
}