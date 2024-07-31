#include<stdio.h>
struct employee{
    char name[20];
    char desig[20];
    float basic;
    float hra;
    float da;
};
float gross_calc(float basic,float hra,float da){
    float h = (hra/100)*basic;
    float d = (da/100)*basic;
    return basic+h+d;
}

int main(){
    int n;
    int i;
    printf("Enter the number of employees: \n");
    scanf("%d",&n);
    struct employee emp[n];
    for(i=0;i<n;i++){
        printf("Enter info of employee %d:\n",i+1);
        printf("Enter name:");
        scanf("%s",&emp[i].name);
        printf("Enter designation:");
        scanf("%s",&emp[i].desig);
        printf("Enter basic salary:");
        scanf("%f",&emp[i].basic);
        printf("Enter hra :");
        scanf("%f",&emp[i].hra);
        printf("Enter da :");
        scanf("%f",&emp[i].da);
    }
    for(i=0;i<n;i++){
        printf("\ndisplay information of employee %d \n ", i+1);
        printf("Name: %s\n",emp[i].name);
        printf("Designation: %s\n",emp[i].desig);
        printf("Basic salary: %f\n",emp[i].basic);
        printf("HRA  : %f\n",emp[i].hra);
        printf("DA  : %f\n",emp[i].da);
        float gross = gross_calc(emp[i].basic,emp[i].hra,emp[i].da);
        printf("Gross salary:%f\n",gross);
    }
    return 0;
        
}
