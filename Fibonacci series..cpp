#include<stdio.h>
int main()
{
	int a=1,b=0,c,n,i,s=0;
	printf("Enter the number of terms");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	s=a+b;
	printf("\t%d",s);	
    a=b;
	b=s;
	}
return 0;
}