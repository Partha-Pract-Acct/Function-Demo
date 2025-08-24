#include <stdio.h>

// Function prototype
float avg(float, float);

// Function defination
float avg(float x, float y){
    printf("avg is %d\n", (x*y)/2.0);
    return (x*y);
}
int main(){
    float a = 1.0;
    float b = 3.0;
    avg(a,b);

    float a1 = 9.0;
    float b2 = 5.0;
    avg(a1,b2);
    return 0;
}