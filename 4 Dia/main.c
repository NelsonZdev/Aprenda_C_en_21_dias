#include <stdio.h>

#define SECS_PER_MIN 60
#define SECS_PER_HURS 3600

unsigned seconds, minutes, hours, secs_left, min_left;

int x,y;

int main(int *argc, char *argv[]){

    printf("Enter number of seconds (< 65000): ");
    scanf("%d", &seconds);

    hours = seconds / SECS_PER_HURS;
    minutes = seconds / SECS_PER_MIN;
    min_left = minutes % SECS_PER_MIN;
    secs_left = seconds % SECS_PER_MIN;

    printf("%u seconds is equal to ",seconds);
    printf("%u h, %u m, and %u s ", hours, min_left, secs_left);

    float value;
    value = (5 + 3) * 8 /(2 + 2);

    printf("\n%f",value);

    printf("TwoNumbers");
    scanf("%d %d",&x,&y);
    printf("\n\n%d is bigger", (x > y) ? x : y);

    if (x >= 1 || x <= 20)
        y = x;
    
    y = (x > 0 || x < 21) ? x : y;

    if(x < 1 && x >10){
        //Enunciado
    }
    if (x > 20 && x < 66)
    {
        /* code */
    }
    

    return 0;
}