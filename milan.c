#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter Two numbers:");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("The Two numbers after swapping are:%d%d",a,b);
}
