#include<stdio.h>

int stringComparer(char ch[],char dh[]){
	for(int i=0;ch[i]!='\0';i++)
	{
		if(ch[i]!=dh[i])
		{
			return 0;
		}
	}
	return 1;
}

int main(){
	char ch[100],dh[100];
	printf("Enter the first String:");
	fgets(ch,sizeof(ch),stdin);
	printf("Enter the second String:");
	fgets(dh,sizeof(dh),stdin);
	int l=0;
	for(int i=0;ch[i]!='\0';i++)
	{
		l++;
	}
	int k=0;
	for(int i=0;dh[i]!='\0';i++)
	{
		k++;
	}
	if(l==k)
	{
		if(stringComparer(ch,dh))
		{
			printf("The two Strings are equal.");
		}
		else
		{
			printf("The two Strings are not equal.");
		}
	}
	else
	{
		printf("The two Strings are not equal.");
	}
	return 0;
}