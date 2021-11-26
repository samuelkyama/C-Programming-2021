/*program to find average heights of n students using arrays*/
#include <stdio.h>
int main()
{
int heights[5],i,n,sum,average;
printf("Enter number of students:");
scanf("%d",&n);

for(i=0;i<n;++i)
{
printf("Enter number %d:",i+1);
scanf("%d",&heights[i]);
sum+=heights[i];
}
average=sum*n;
printf("average=%d",average);
return 0;
}