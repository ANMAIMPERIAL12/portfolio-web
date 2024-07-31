#include<stdio.h>

int main(){
    //area of cylinder
    int h;
    float r;
    printf("Enter radius of base of cylinder: ");
    scanf("%f",&r);
    printf("Enter height of cylinder: ");
    scanf("%d",&h);
    float area = (2*3.14*r*(r+h));
    printf("The area of cylinder with given data is : %f",area);
    return 0;
}
