int main(void)
{
    int i, no;

    printf("请输入一个正整数：");
    scanf("%d", &no);
    if(no<=0){
    	printf("输入的不是正数");
    	return 0;
    }
    i = 1;
    while (i <= no)
        printf("%d ", i++);
    printf("\n");

    return 0;
}