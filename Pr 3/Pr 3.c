// This program is about finding BMI of individual and displaying corresponding output
#include<stdio.h>
#define weight =w
#define height =h
void main(){
    float w,h,BMI;

    printf("weight in kilogram(kg),height in meters(m)\n");
    printf("1m=3.28 feet\n");
    printf("enter weight= ");
    scanf("%f",&w);
    printf("enter height= ");
    scanf("%f",&h);
    BMI=w/(h*h);
    printf("BMI= %f\n",BMI);
    if(BMI>25.5){
        printf("Overweight\n");
    }
    else if(BMI>18.5&&BMI<=25.5){
        printf("Normal\n");
    }
    else if(BMI<=18.5){
        printf("Under weight\n");
    }
    else{
        printf("Not a valid input\n");
    }

}
