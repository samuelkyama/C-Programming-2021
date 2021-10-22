#include <stdio.h>

int main()
{
    int a,b,add,sub,mul,div,rem;
	printf("Enter values to a,b:");
	scanf("%d,%d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	rem=a%b;
	printf("Result of add=%d\n",add);
	printf("Result of sub=%d\n",sub);
	printf("Result of mul=%d\n",mul);
	printf("Result of div=%d\n",div);
	printf("Result of rem=%d\n",rem);
	return 0;
	}
