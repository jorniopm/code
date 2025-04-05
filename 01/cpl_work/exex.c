#include <stdio.h>
int main(){
    int a = 0, b = 1;
    if(a++ && b++){
        printf("t");
    }else{
        printf("f");
    }
}