#include <stdio.h>
int main()

{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i>0;i--)
	{
		if(a%i==0 && b%i==0)
		{
			printf("%d %d\n",a/i,b/i);
			break;
		}
	}
}