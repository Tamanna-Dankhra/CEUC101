// This program is about entering age of person according to their age they are told to pay for entry or not
#include<stdio.h>
int main(){
    int age,adult,quantity;
    printf("age<12 children ,age>12&age<50 adult age,age>=50 senior citizen \n");
    printf("enter age= ");
    scanf("%d",&age);
    if(age<=12){
        printf("free entry\n");
    }
    else if(age>12&&age<50){
        printf("adult\n");
        printf("entry charge 300/- rupees\n");
    }
    else{
        printf("No charge for entry\n");
    }
    return 0;

}
