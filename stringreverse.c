#include<stdio.h>
#include<string.h>

int main(){
	char ch[100];
	printf("Enter the String:");
	scanf("%s",ch);
	int l=strlen(ch);
	char *ptr=NULL,*ctr=&ch[l-1];
	char t;
	for(ptr=ch;ptr<&ch[l/2];ptr++)
	{
		t=*ptr;
		*ptr=*ctr;
		*ctr=t;
		ctr--;
	}
	printf("The String in reverse is:%s\n",ch);
	return 0;
}