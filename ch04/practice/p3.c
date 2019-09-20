#include<stdio.h>
int main(void)
{
    int no;
    int x=-1;
    printf("请输入一个正整数：");
    scanf("%d", &no);
    while (no >= 1)
        printf("%d", no--);
    if(no==0){
    printf("\n");}
    else printf("输入为负数");
    return 0;
}