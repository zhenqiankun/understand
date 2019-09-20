#include<stdio.h>
int main(int argc, char const *argv[])
{
	printf("输入一个正数");
	int x;
	scanf("%d",&x);
 for(int i=2;i<=x;i=i+2){
printf("%d",i);
 }
	return 0;
}