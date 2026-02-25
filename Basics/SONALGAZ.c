#include <stdio.h>

int main(){
    int E;
    float totelec;
    float pe1=1.7787, pe2=4.1789, pe3=4.8120, pe4=5.4796;
    int G;
    float totgas;
    float pg1=0.1682, pg2=0.3245, pg3=0.4025, pg4=0.4599;

    printf("This program calculates the total Electricity and Gas cost using the SONALGAZ rating!");

    printf("\nplease enter Electricity consumption quantity:");
    scanf("%d", &E);
    

    if(125>=E){
       totelec=E*pe1; 
    
    }else if(250>=E){
        totelec=(125*pe1)+(E-125)*pe2;

    }else if(1000>=E){
        totelec=(125*pe1)+(125*pe2)+(E-250)*pe3;
    }else 
    totelec=125*pe1+125*pe2+750*pe3+(E-1000)*pe4; 

    printf("The total electricity cost is %.4f DA", totelec);

    printf("\nplease enter Gas consumption quantity:");
    scanf("%d", &G);

    if(1125>=G){
       totgas=G*pg1; 
      
    }else if(2500>=E){
        totgas=(1125*pg1)+(G-1125)*pg2;

    }else if(7212>=E){
        totgas=(1125*pg1)+(1375*pg2)+(G-2500)*pg3;
    }else 
    totgas= 1125*pg1+1375*pg2+4712*pg3+(G-7212)*pg4;

    printf("\nThe total electricity cost is %.4f DA", totgas);

    printf("\nThe Total is %.4f", totelec+totgas);
}