
#include<stdio.h>
void main()
{ 
int a,b,c;
printf("Welcome To Calculator \n Enter the task you want to perform \n1: Add \n2: subtract \n3: Multiply\n4: Square\nEnter task number\n ");
scanf("%d",&a);

if(a==4)
{
printf("Enter number");
scanf("%d",&b);
b=b*b;
printf("square is %d",b);
}
else
{
printf("Enter two numbers ");
scanf("%d %d",&b,&c);

if(a==1)
{a=b+c;}
else if(a==2)
{a=b-c;}
else if(a==3)
{a=b*c;}
printf(" your answer is %d",a);
}



getch();
}
