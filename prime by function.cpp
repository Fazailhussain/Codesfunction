#include<stdio.h>
int prime(int num)
{
	int count=0;
	for(int i=1;i<=num/2;i++)
	{
	if(num%i==0)
	{
	
	count++;
}
}
if(count==1)
		return printf("%d is prime",num);
	else return printf("%d is not prime",num);
}
int main()
{
		int n;
	printf("Enter the number");
	scanf("%d",&n);
	prime(n);
}
