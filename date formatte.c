#include<stdio.h>
int main()
{
	int d,m,y;
	printf("enter your date(dd/mm/yyyy):\n");
	scanf("%d/%d/%d",&d,&m,&y);
	printf("formatted:%d-%d-%d",y,m,d);
	return 0;
}