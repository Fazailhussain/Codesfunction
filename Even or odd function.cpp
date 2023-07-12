#include<stdio.h>
int even_odd(int num)
{
	if(num%2==0)
	return printf("The number %d is even",num);
	else return printf("The number %d is odd",num);
}
int main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	even_odd(n);
}
