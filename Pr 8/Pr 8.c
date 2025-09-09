// This program is about checking eligibility  as per entered age of user either he/she can open saving account or not
#include<stdio.h>
void main(){
     int age;
    // minimum age to open an account is 18 years
    printf("enter age= ");
    scanf("%d",&age);
    if(age>=18){
        printf("you are eligible to open a saving account\n");
    }
    else if(age>0 && age<18){
        printf("SORRY! you are NOT eligible yet to open a saving account\n");
    }
    else if(age<=0) {
        printf("Not a valid age input\n");
    }

    return 0;
}



