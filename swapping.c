#include<stdio.h>

int main()
{
int a,b; 
printf("Enter the values for a and b : ");
scanf("%d%d",&a,&b); //getting input from the user(a=5,b=10)
a=a+b; //a=15
b=a-b; //b=5
a=a-b; //a=10
printf("After swapping, the value of a is %d and b is %d",a,b); //a=10,b=5
return 0;
}
