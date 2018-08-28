#include<stdio.h>
#include<limits.h>
int main()
{
	int n,a[100],f,s;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	f=s=INT_MIN;
	for(int i=0;i<n;i++){
		if(a[i]>f){
			s=f;
			f=a[i];
		}else if(a[i]>s && a[i]!=f){
			s=a[i];
		}
	}
	if(s==INT_MIN)
		printf("The second largest does not exist.\n");
	else
		printf("The second largest element is %d.\n",s);
	return 0;
}
