#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int r = rand();
    if(r%3==0){
        printf("Fizz\n");
    }
    if(r%5==0){
        printf("Buzz\n");
    }
    if(r%5==0 && r%3==0){
        printf("Fizz Buzz\n");
    }
    return 0;
}
