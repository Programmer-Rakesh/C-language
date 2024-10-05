#include <stdio.h>

int main(){

    //WAP to calculate Simple Interest:
    int p = 100;
    int q = 4;
    int r = 7;
    int s = (p*q*r)/100;
    printf("Simple Interest : %d\n", s);

    //WAP to to find th etemperature in celcius to farenheit and viceversa:
    //Celcius to farenheit:
    float c = 23;
    float f = ((c*9)/5)+32;
    printf("In farenheit : %f\n", f);

    //Ferenheit to celcius:
    float a = 72;
    float b = (a-32)*5/9;
    printf("In celcius : %f\n", b);

    //Division & Modulus:
    int x = 5, y = 2;
    int div = x/y;
    int div1 = x%y;
    printf (" value of div : %d\n", div);
    printf (" value of div1 : %d\n", div1);

    //

    return 0;
}