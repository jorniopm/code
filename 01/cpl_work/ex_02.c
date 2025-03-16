#include <stdio.h>
int main(){
    int a,b,c;
    scanf ("%d %d %d", &a, &b, &c);
    //判断是否能构成三角形
    if(a+b>c && a+c>b && b+c>a){
        //判断是否是等边三角形
        if(a==b && b==c){
            printf("equilateral triangle\n");
        }else if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
            printf("right triangle");//判断是否是直角三角形            
        }else if(a*a+b*b<c*c || a*a+c*c<b*b || b*b+c*c<a*a){
            if(a==b || b==c || a==c){
                printf("obtuse isosceles triangle");//判断是否是等腰锐角三角形
            }else{
                printf("obtuse triangle");
            }
        }else{
            if(a==b || b==c || a==c){
                printf("acute isosceles triangle");//判断是否是等腰钝角三角形
            }else{
                printf("acute triangle");
            }
        }
    }else{
        printf("not triangle");
    }
    return 0;
}