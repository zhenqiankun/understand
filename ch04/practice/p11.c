#include<stdio.h>
int main(int argc, char const *argv[])
{
	printf("输入一个正数");
	int x;
	int sum=0;
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
sum+=i;
	}
	printf("%d",sum);
	return 0;
}