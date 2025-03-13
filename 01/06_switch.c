#include <stdio.h>

int main(){
    int category;
    category = 2;
    float price = 299.99;
    
    switch(category){
        case 1:
            if(price < 500){
                printf("电子产品价格较低，无优惠\n");
            }else if(price < 1000){
                printf("电子产品可享受5%%的优惠\n");
            }else{
                printf("电子产品可享受10%%的优惠\n");
            }
            break;
        case 2:
            if(price < 200){
                printf("服装价格较低，无优惠\n");
            }else if(price < 500){
                printf("服装可享受8%%的优惠\n");
            }else{
                printf("服装可享受15%%的优惠\n");
            }
            break;
        default:
            printf("商品类型错误\n");
    }
    return 0;
}