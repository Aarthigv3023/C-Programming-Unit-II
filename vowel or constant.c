#include<stdio.h>
int main()
{
	char ch;
	printf("enter your character:");
	scanf("%c",&ch);
	if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='Y')
	printf("it is vowel\n");
	else
	printf("it is constant\n");
	return 0;
}