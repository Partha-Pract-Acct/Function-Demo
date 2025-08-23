#include <stdio.h>

// Function prototype
int sum(int, int);

// Function defination
int sum(int x, int y){
    printf("sum is %d\n", x+y);
    return x+y;
}
int main(){
    int a = 1;
    int b = 3;
    sum(a,b);

    int a1 = 9;
    int b2 = 5;
    sum(a1,b2);
    return 0;
}


