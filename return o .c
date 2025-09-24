#include<stdio.h>
void change(int x){
	x=20;
	printf("a=%d\n",x);
}
int main(){
	int a = 10;
	change(a);
	printf("a=%d\n",a);
	return 0;
}