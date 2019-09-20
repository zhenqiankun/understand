#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	printf("输入一个数");
	int x;
	int num=1;
	scanf("%d",&x);
	while(num<=x){
		printf("%d,",num);
		num=num*2;
	}
	return 0;
}