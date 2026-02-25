#include <stdio.h>
#include <windows.h>


void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}


int main(){
    printf("this program shows you the season according to the month number\n");
    int month;
    printf("the month's number is: ");
    scanf("%d", &month);

    if (month == 12 || month == 1 || month == 2){
        setColor(1);printf("Winter!!");
    }
    
    else if (month == 3 || month == 4 || month == 5) {
        setColor(12);printf("Spring!!");
    }
    
    if (month == 6 || month == 7 || month == 8) {
        setColor(14);printf("Summer!!");
    }
    
    else if (month == 9 || month == 10 || month == 11) {
        setColor(6);printf("Autumn!!");
    }
    


}