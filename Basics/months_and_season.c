#include <stdio.h>

int main(){
    printf("this program shows you the season according to the month number\n");
    int month;
    printf("the month's number is: ");
    scanf("%d", &month);

    switch (month) {
        case 12:
        case 1:
        case 2:
            printf(" it's winter!!");
            break;
        case 3:
        case 4:
        case 5:
            printf("it's spring!!");
            break;
        case 6:
        case 7:
        case 8:
            printf("it's summer!!");
            break;
        case 9:
        case 10:
        case 11:
            printf("it's autumn!!");
            break;
    }

}