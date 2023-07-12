#include<stdio.h>
int factorial(int rows)
{
	int fact=1;
	for(int i=rows;i>=1;i--)
	{
		fact=fact*i;
    }
return fact;
}
int pascal_triangle(int row,int rfact,int cfact,int rcfact)
{
	int pascal;
    for(int i=1;i<=row;i++)
    {
    	for(int j=row-i;j>=0;j--)
    	{
    		printf(" ");
    	}
    		for(int k=1;k<=2*i-1;k++)
    		{
    			pascal=cfact/(rfact*rcfact);
    			printf("%d",pascal);
			}
    	
		
		printf("\n");
	
   }
return 0;
}
int main()
{
	int r,c,rc,rfact,cfact,rcfact;
	printf("Enter the number of rows and columnc");
	scanf("%d%d",&r,&c);
	rfact=factorial(r);;
	cfact=factorial(c);
	rc=r-c;
	rcfact=factorial(rc);
	pascal_triangle(r,rfact,cfact,rcfact);
}
