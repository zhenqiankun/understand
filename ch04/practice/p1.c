#include<stdio.h>
int main(){
int x,y;
scanf("%d",&x);
scanf("%d",&y);
int min=x;
if(min>y)
{
min=y;}
int max=x;
if(max<y){
max=y;}
int num=0;
for(min=min+1;min<max;min++){
num+=min;}
printf("%d",num);
}

