#include <stdio.h>

int main(){
    int S, H, M;

    printf("This program converts time in seconds into hours, minutes, and seconds!\n");
    printf("Please enter the time in seconds: ");
    scanf("%d", &S);

    H=S/3600;
    M=(S%3600)/60;
    S=(S%3600)%60;


    printf("The resault is:\n");
    printf("%d.%d.%d", H, M, S);

}