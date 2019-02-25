#include<stdio.h>
int main()
{
int a;
printf("Enter any integer \n");
scanf("%d",&a);
printf("Value is %d and is stored at address is %u",a,&a);
}
