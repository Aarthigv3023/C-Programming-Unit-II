#include<stdio.h>
int main()
{
	int rows,cols;
	printf("enter your rows and column:");
	scanf("%d %d",&rows,&cols);
	int matrix[10][10];
	printf("enter element:\n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			scanf("%d",&matrix[i][j]);
		}
	
	}
  printf("matrix:\n");
  for(int i=0;i<rows;i++){
  	for(int j=0;j<cols;j++){
  		printf("%d",matrix[i][j]);
	    }
	  printf("\n");
    }
  return 0;
}