#include <stdio.h>

int main(){
    int mike_score = 89;
    int john_score = 98;
    int temp = 0;
    temp = john_score;
    john_score = mike_score; 
    mike_score = temp;
    printf("Mike's score is %d\n", mike_score);
    printf("John's score is %d\n", john_score);
    return 0;
}
