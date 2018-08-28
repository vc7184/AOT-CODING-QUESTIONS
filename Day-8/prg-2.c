#include<stdio.h>
int main()
{
	int n,ans,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&ans);
	for(int i=0;i<n;i++){
		int num=a[i];
		int flag=0,b[100],k=1;
		b[0]=a[i];
		for(int j=i+1;j<n;j++){
			num+=a[j];
			b[k]=a[j];
			if(num==ans){
				flag=1;
				break;
			}
			if(num>ans)
				break;
			k++;
		}
		if(flag==1){
			for(int p=0;p<=k;p++)
				printf("%d ",b[p]);
			printf("\n");
		}
	}
	return 0;
}
