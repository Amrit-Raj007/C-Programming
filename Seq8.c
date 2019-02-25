#include<stdio.h>
int main()
{
    int c;
    char ch1,ch2;
printf("Enter two Characters \n");
scanf("%c",&ch1);
scanf("%c",&ch2);
printf("The total Characters present between them is %d",(ch2-ch1)-1);
}
