#include<stdio.h>
int fact(int n);
int main()
{
	int f,no;
	printf("Enter the number");
	scanf("%d",&no);
	f=fact(no);
	printf("The factorial is%d",f);	
}
int fact(int n)
{
	if(n==1)
	return n;
	else
	return n*fact(n-1);
}