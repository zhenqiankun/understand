#include<stdio.h>
int main(int argc, char const *argv[])
{
	printf("输入一个正数");
	int x;
	scanf("%d",&x);

	for(int i=1;i<x;i++){
	  if(i%2==1) printf("+");
	  else printf("-");
	}
	printf("\n");
	return 0;
}