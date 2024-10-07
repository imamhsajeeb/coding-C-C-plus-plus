#include<stdio.h>
int main()
{
    int yr;
    printf("Enter year:");
    scanf("%d",&yr);
    if(yr%4==0){
        if(yr%100==0){
            if(yr%400==0)
                printf("This is a leap year");
            else
                printf("This is not a leap year");
        }
        else
            printf("This is a leap year");
    }
    else
        printf("This is not a leap year");
    return 0;
}
