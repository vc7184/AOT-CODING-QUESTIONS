#include<stdio.h>
#define MAX 1000000
int main()
{
	int n1,n2;
	int a1[100],a2[100];
	scanf("%d",&n1);
	for(int i=0;i<n1;i++)
		scanf("%d",&a1[i]);
	scanf("%d",&n2);
	for(int i=0;i<n2;i++)
		scanf("%d",&a2[i]);
	int max=n1>n2?n1:n2;
	int i=0,j=0;
	a1[n1]=MAX;
	a2[n2]=MAX;
	while(i!=n1 || j!=n2){
		if(a1[i]<a2[j]){
			printf("%d ",a1[i]);
			i++;
		}else if(a1[i]>a2[j]){
			printf("%d ",a2[j]);
			j++;
		}else if(a1[i]==a2[j]){
			i++;
			j++;
		}
	}
	return 0;
}
