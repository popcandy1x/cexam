#include<stdio.h>
#include<string.h>

int main(){
	FILE *fp,*fs;
	char ch[80];
	fp=fopen("Names.txt","w");
	if(fp==NULL)
	{
		printf("cannot open file");
	}
	printf("Enter the names:");
	while(strlen(gets(ch))>0)
	{
		fputs(ch,fp);
		fputs("\n",fp);
	}
	fclose(fp);
	fs=fopen("Names.txt","r");
	if(fs==NULL)
	{
		printf("cannot open file");
	}
	while(fgets(ch,79,fs)!=NULL){
		if(ch[0]=='R')
		{
			printf("%s",ch);
		}
	}
	fclose(fs);
	return 0;
}