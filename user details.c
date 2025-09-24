#include<stdio.h>
int main()
{
	char name[20];
	int age;
	int marks;
	printf("enter your name:");
	scanf("%s",&name);
	printf("enter your age:");
	scanf("%d",&age);
	printf("enter your mark:");
	scanf("%d",&marks);
	printf(" student details\n");
	printf("|name:%s|age:%d|marks:%d|",name,age,marks);
	return 0;
}