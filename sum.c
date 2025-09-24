#include<stdio.h>
int sum_add(int,int);
int sum_add(int a,int b)
{
		return a+b;
} 
int main()
{
		printf("----------------------------\n");
		printf("the sum of 2 number:%d",sum_add(3,5));
		return 0;
}