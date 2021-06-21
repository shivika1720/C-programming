//takes nothing returns nothing
#include<stdio.h> // header file having declaraion of printf and scanf functions.
main()
{
	void add(void);// function declaration
	add();  // function calling
}

void add()  // function defination
{
	int a,b;
	printf("enter two numbers\n");
	scanf("%d %d",&a,&b);
	printf("sum is %d\n",a+b);
} 
