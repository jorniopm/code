#include <stdio.h>

int main(){
    int int_1 = 80;
    printf("int_1 is %d\n", int_1);
    char char_1 = 'A';
    printf("char_1 is %c\n""char_1_ASCII is %d\n", char_1, char_1);
    char char_2 = (char)int_1;
    printf("char_2 is %c\n", char_2);
    char char_array [10] = "Hello"; //char 后面的数字是数组的长度，不是字符串的长度
    printf("mem_char is %zu, %zu\n", sizeof(char_1), sizeof(char_array));

    return 0;
}