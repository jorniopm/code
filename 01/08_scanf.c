#include <stdio.h>
// #include <windows.h>


int main(){
    // SetConsoleOutputCP(65001);
    int category;
    float price;
    printf("请输入商品类别和价格：");
    scanf(" %c %f", &category, &price);

    switch(category){
        case 'A':
            if(price < 500)
            {
                printf("电子产品价格较低，无优惠\n");
            }
            else if(price < 1000)
            {
                printf("电子产品可享受5%%的优惠\n");
            }
            else
            {
                printf("电子产品可享受10%%的优惠\n");
            }
            break;
        case 'B':
            if(price < 200)
            {
                printf("服装价格较低，无优惠\n");
            }
            else if(price < 500)
            {
                printf("服装可享受8%%的优惠\n");
            }else
            {
                printf("服装可享受15%%的优惠\n");
            }
            break;
        default:
            printf("商品类型错误\n");
    }
    return 0;
}