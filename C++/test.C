#include <stdio.h>
#include <stdlib.h>

int main()
{
    char seat;
    int tickets;
    printf("Please input the zone of seat\n");
    scanf("%s",seat);
    
    printf("Please input the number of tickets\n");
    scanf("%d",tickets);

    switch(seat){
        case'a':
            printf("total fare is %d:",1800*tickets);
            break;
        case'b':
            printf("total fare is %d:",1600*tickets);
            break;
        case'c':
            printf("total fare is %d:",1200*tickets);
            break;
        case'd':
            printf("total fare is %d:",800*tickets);
            break;
        case'e':
            printf("total fare is %d:",600*tickets);
            break;
    }
    return 0;
}