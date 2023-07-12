#include<stdio.h>
int calculator(int num1,int num2,char opr)
{
	int res;
	switch(opr)
	{
		case '+':
			res=num1+num2;
			break;
		case '-':
			num1>num2?res=num1-num2:res=num2-num1;
			break;
		case '*':
			res=num1*num2;
			break;
		case  '/':
			res=num1/num2;
			break;
	}
	return res;
}
int main()
{
	char opr;
	int n1,n2,result;
	printf("Enter two numbers");
	scanf("%d%d",&n1,&n2);
	printf("Enter the operation you want to do");
	scanf(" %c",&opr);
	result=calculator(n1,n2,opr);
	printf("%d",result);
}
