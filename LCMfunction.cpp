#include<stdio.h>
int GCD(int num1,int num2)
{
	int i,smaller,gcd;
	num1<num2?smaller=num1:smaller= num2;
	
	for(i = 2;i<=smaller / 2;i++) {
		
		if(num1 % i == 0 && num2 % i == 0) {
			
			gcd = i;
		}
	}
	return gcd;
	
}

int main(){
	
	int num1,num2;
	
	printf("Enter two number\n");
	scanf("%d%d",&num1,&num2);
	
	printf("The LCM of two numbers is = %d",num1 * num2 / GCD(num1,num2) );
	
}
