# 20210226
這是2020程式設計要放的程式碼倉庫

## 1.進階題：分式化簡 
```C
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
```

## 2.進階題：讀入整數反序列印 
```C
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
```

## 3.進階題：A的B次方函數
```C
#include <stdio.h>
int MYPOWER(int a , int b)
{
	int ans=1;
	for(int i=1;i<=b;i++)
	{
		ans*=a;
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```

## 4.進階題：漸增數列相加
```C
#include <stdio.h>
int main()

{
	int n;
	int ans=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		ans+=i*(i+1);
	}
	printf("%d\n",ans);
}
```

## 5.基礎題：找零錢 
```C
#include <stdio.h>
int main()

{
	int a,b,c,d;
	scanf("%d",&a);
	
	b=a/50;
	c=a%50/5;
	d=a%50%5/1;
	printf("%d=50*%d+5*%d+1*%d\n",a,b,c,d);
}
```

## 6.基礎題：因數個數
```C
#include <stdio.h>
int main()

{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(n%i==0) ans++;
	}
	printf("%d\n",ans);
}
```

## 7.基礎題：找倍數
```C
#include <stdio.h>
int main()

{
	int a[10];
	int n=0;
	for(int i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int k=1;k<=10;k++)
	{
		if(a[k]%3==0) n++;
	}
	printf("%d\n",n);
}
```

## 8.基礎題：整數轉換為等級
```C
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
```
