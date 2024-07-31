#include<stdio.h>

int main(){
    float c;
    float fahrenheit;
    printf("Enter the temperature in degree celcius: ");
    scanf("%f",&c);
    fahrenheit = ((9.0/5.0)*c)+32 ;
    printf("The given temperature in fahrenheit is : %f ",fahrenheit);
    return 0;
}
