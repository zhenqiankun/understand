
#include<stdio.h>
int main(int argc, char const *argv[])
{
	printf("输入一个正数");
	int x;
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		if(i==1||i==x){
			for(int j=1;j<=x;j++){
				printf("*");
			}
			printf("\n");
		}
		else{ for(int j=1;j<=x;j++){
			if(j==1||j==x){
				printf("*" );
			}
			else printf(" ");

		}
		printf("\n");
		}
	}
	
	return 0;
}