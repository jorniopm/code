#include <stdio.h>
    int main(){
        int total = 0;
        int value_50, value_20, value_10, value_5, value_1;
        printf("请输入一个金额：");
        scanf("%d", &total);
        value_50 = total / 50;
        value_20 = (total % 50) / 20;
        value_10 = (total % 50 % 20) / 10;
        value_5 = (total % 50 % 20 % 10) / 5;
        value_1 = total % 50 % 20 % 10 % 5;
        printf("%d\n%d\n%d\n%d\n%d\n" ,value_50, value_20, value_10, value_5, value_1);
        return 0;
    }