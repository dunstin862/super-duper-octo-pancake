// 202610305229
// 张昌龙
#include<stdio.h>

int main()
{
    printf("请输入你的成绩：\n");
    float a;
    scanf("%f", &a);
    
    if(a >=90 && a<100){
        printf("A\n");
    }
    else if(a >=80 && a<89.99){
        printf("B\n");
    }
    else if(a >=70 && a<79.99){
        printf("C\n");
    }
    else if(a >=60 && a<69.99){
        printf("D\n");
    }
    else if(a <59.99 && a>=0){
        printf("E\n");
    }
    else{
        printf("输入无效\n");
    }
    return 0;
}