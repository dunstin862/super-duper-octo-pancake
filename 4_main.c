// 202610305229
// 张昌龙
#include<stdio.h>

int main()
{
    printf("请输入你的成绩：\n");
    float score;
    scanf("%f", &score);

    if(score < 0 || score > 100){
        printf("输入无效\n");
    }
    else if(score >= 90 ){
        printf("A\n");
    }
    else if(score >= 80){
        printf("B\n");
    }
    else if(score >= 70){
        printf("C\n");
    }
    else if(score >= 60){
        printf("D\n");
    }
    else{
        printf("E\n");
    }

    return 0;
}


