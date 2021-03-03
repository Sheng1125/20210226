#include <stdio.h>
int main()

{
	int n;
	scanf("%d",&n);
	if(n>=90) printf("A\n");
	if(90>n && n>=80) printf("B\n");
	if(80>n && n>=60) printf("C\n");
	if(n<60) printf("F\n");
}