#include<stdio.h>
int main(int argc, char const *argv[])
{
	printf("输入一个正数");
	int x;
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
printf("%d\n",i*i);
	}
	
	return 0;
}