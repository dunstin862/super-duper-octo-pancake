// 202610305229
// 张昌龙
#include<stdio.h>

int main() 
{
    printf("请输入一个数：\n");
     float a;
     scanf("%f", &a);

     if(a > 0){
         printf("正数\n");
     }
     else if(a < 0){
         printf("负数\n");
     }
     else{
         printf("零\n");
     }
    return 0;
}