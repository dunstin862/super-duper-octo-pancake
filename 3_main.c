// 202610305229
// 张昌龙
#include<stdio.h>

int main()
{
    printf("请输入三个数；\n");
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    if(a+b>c && a+c>b && b+c>a){
        printf("可以构成三角形\n");
    }
    else{
        printf("不能构成三角形\n");
    }

    return 0;

}