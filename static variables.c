/*static variables*/
#include<stdio.h>
int a=10; /*global var*/
int main()
{
	static int a=25; /*static var*/
	printf("value of a is=%d",a);
	return 0;
	}
