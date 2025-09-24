#include<stdio.h>
int main()
{
	int age;
	printf("enter your age:");
	scanf("%d",&age);
  {
	if(age>=18)
		printf("your are eligible");
	else
		printf("your are not eligible");
  }
	return 0;
}