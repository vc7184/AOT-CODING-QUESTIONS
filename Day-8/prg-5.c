#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
	if(argc!=2){
		printf("ERROR\n");
		return 0;
	}
	int n=strlen(argv[1]);
	for(int i=0;argv[1][i]!='\0';i++){
		if((argv[1][i]<67 && argv[1][i]>90) || (argv[1][i]<97 && argv[1][i]>122)){
			printf("ERROR\n");
			return 0;	
		}
	}
	for(int i=0;i<n/2;i++){
		char t=argv[1][i];
		argv[1][i]=argv[1][n-i-1];
		argv[1][n-i-1]=t;
	}
	printf("%s\n",argv[1]);
	return 0;
}
