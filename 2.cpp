#include <stdio.h>
int main()

{
	int a[11];
	int b=0;
	for(int i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
		b++;
		if(a[i]==0)
		break;
	}
	for(int k=b-1;k>=1;k--)
	{
		printf("%d ",a[k]);
	}
	printf("\n");
}