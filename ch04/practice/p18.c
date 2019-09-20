#include<stdio.h>
int main(int argc, char const *argv[])
{
	printf("输入一个正数");
	int x;
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		 for(int t=1;t<=20-i;t++){
		 	printf(" ");
		 }
for(int j=1;j<=(i-1)*2+1;j++){
	printf("*");
}
printf("\n");
	}
	
	return 0;
}