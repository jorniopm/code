# include <stdio.h>

int main (){
    //double height = 1.801233789;
    //printf("Height is %.9f\n", height); // %.9f is the format specifier for a double with 9 decimal places
    float float_1 = 11.27;
    float float_2 = 11.12345678910;
    printf("float_1: %f\n"
           "float_2: %f\n", 
           float_1, float_2);
    double double_1 = 11.12345678910;
    printf("double_1: %.10lf\n"
           "float_2: %.10f\n", 
           double_1, float_2);
    return 0;
}