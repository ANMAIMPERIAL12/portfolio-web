#include<stdio.h>

int main(){
    //calculating simple interest formula 
    int p;
    float r;
    float t;
    float s;
    printf("Enter the principal amount: ");
    scanf("%d",&p);
    printf("Enter the amount of time: ");
    scanf("%f",&t);
    printf("Enter the rate of interest:");
    scanf("%f",&r);
    s = (p*r*t)/100;
    printf("The simple interest for given data is : %f",s);
    
    return 0;
}
