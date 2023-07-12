#include<stdio.h>
int swap(int num1,int num2)
{
	int num3;
	num3=num1;
	num1=num2;
	num2=num3;
	return printf("The swapped values are %d and %d",num1,num2);
}
int main()
{
	int n1,n2;
	printf("Enter two numbers to be swapped");
	scanf("%d%d",&n1,&n2);
	swap(n1,n2);
}
