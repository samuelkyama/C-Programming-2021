#include <stdio.h>
int S=22; /*global variables*/
extern int b = 8;/*extern variables*/

int main()
{
	int a=15;
   static int E=5; /*static variable*/
   printf("value of extern variable b=%d\n",b);
   printf("value of global variable S=%d\n",S);
   printf("value of local variable a=%d\n",a);
	printf("value of static variable E=%d\n",E);
   return 0;
}
