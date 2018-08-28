#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
	fp = fopen("f1","r");
	if(fp==NULL){
		printf("ERROR\n");
		return 0;
	}
	int count=0;
	int ch=getc(fp);
	while(ch!=EOF){
		if((char)ch=='\n')
			count++;
		ch=getc(fp);
	}
	fclose(fp);
	printf("%d\n",count);
	return 0;
}
