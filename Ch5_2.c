#include <stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float r);
float ractangleArea(float a, float b);

int main() {
    
    // int n=4;
    // printf("%f", pow(n,2));

    float s=12.0;
    float r=8.0;
    float a=12.0;
    float b=13.0;
    printf("Area of square: %f\n", squareArea(s));
    printf("Area of circle: %f\n", circleArea(r));
    printf("Area of ractangle: %f\n", ractangleArea(a,b));

    return 0;
}

float squareArea(float side){
    return side*side;
}
float circleArea(float r){
    return 3.14*r*r;
}
float ractangleArea(float a, float b){
    return a*b;
}