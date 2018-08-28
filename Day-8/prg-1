#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=(n/2)+1;i>0;i--){
		int k=0,flag=0,num=0,a[100]={0};
		for(int j=i;j>0;j--){
			num+=j;
			a[k]=j;
			if(num==n){
				flag=1;
				break;
			}
			k++;
		}
		if(flag==1){
			for(int p=0;p<=k;p++)
				printf("%d ",a[p]);
			printf("\n");
		}
	}
	return 0;
}
