#include<stdio.h>
int fibo(int n);
int main()
{
	int no,i,f;
	printf("Enter the number of terms");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
	f=fibo(no);
	printf("The fibbonaci series of %d terms is",no,f);	
}
}
int fibo(int n)	
{
	if(n==0||n==1)
	return n;
	else if(n==2)
	return 1;
	else
	return (fibo(n-2)+fibo(n-1));
}