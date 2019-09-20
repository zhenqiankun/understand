#include<stdio.h>
int main(int argc, char const *argv[])
{
	printf("输入一个正数");
	int x;
	scanf("%d",&x);
	int y=0;
	while(x!=0){
		x=x/10;
		y++;
	}
	printf("%d",y);
	return 0;
}