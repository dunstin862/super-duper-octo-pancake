// 202610305229
// 张昌龙
#include<stdio.h>

int main()
{
    printf("请输入摄氏温度：\n");
    float a = 0;
    scanf("%f", &a);

    printf("华氏温度 = %.1f\n", a = (a * 9.0/5) + 32);
    return 0;
}