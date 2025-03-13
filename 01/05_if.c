#include <stdio.h>

int main(){
    // int a = 2;
    // int b = 8;
    // if(a>b){
    //     printf("a与b的差值为%d\n", a - b);
    // }else{
    //     printf("a与b的差值为%d\n", b - a);
    // }
    
    int user_type = 2;
    double price = 180;
    double pay = 0;
    
    if(user_type == 1){
        if(price > 100){
            pay = price * 0.95;
        }else{
            pay = price;
            }
    }else if (user_type == 2){
        if(price > 200){
            pay = price * 0.9;
        }else{
            pay = price * 0.97;    
        }
    }else{
        printf("user_type error\n");
    }
    printf("pay = %.2lf\n", pay);

    return 0;
}