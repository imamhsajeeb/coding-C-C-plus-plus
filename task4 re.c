#include<stdio.h>
int main()
{
    float base,height,area;
    printf("input base:");
    scanf("%f",&base);
    printf("input height:");
    scanf("%f",&height);
    area=(base*height)/2;
    printf("Area of triangle:%f",area);
    return 0;
}
