#include <stdio.h>

int main(){
    float num;
    int hour = 0;
    int min = 0;
    float sec = 0;

    printf("Enter your number : ");
    scanf("%f", &num);

    if (num < 0){
        printf("Invalid Input!!");
        return 0;
    }
    else if (num < 60 && num >= 0){
        sec += num;
    }
    else if(num >= 60 && num < 3600){
        min += (int) (num/60);
        sec += ((num - (60 * min)));
    }
    else if(num >= 3600){
        hour += (int) (num / 3600);
        min += (int) (num - (hour * 3600)) / 60 ; 
        sec += (num - (hour * 3600)) - (min * 60);
    }

    return printf("%d Hours %d Minutes %f Seconds", hour,min,sec);
    
}