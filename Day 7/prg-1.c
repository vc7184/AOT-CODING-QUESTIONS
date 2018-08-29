#include<stdio.h>
int main()
{
	int n,a[100],sum=0;
	scanf("%d",&n);
	int total = ((n+1)*(n+2))/2;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("%d\n",(total-sum));
	return 0;
}
