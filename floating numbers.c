#include<stdio.h>
int main()
{
	float num=123.456789;
	printf("total decimal numbers:%f\n",num);
	printf("2 point numbers:%2.f\n",num);
	printf("4 decimal number:%.4f\n",num);
	printf("decimal points:%.2e\n",num);
	return 0;
}