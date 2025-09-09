// This program is about finding no of women,men, no of literate women,men
#include<stdio.h>
#define no_of_women =w
#define no_of_men =m
#define no_of_illeterate_women =lw
#define no_of_illeterate_men =lm
#define total_illeterate_population =tl
void main(){
    int w,m,lm,lw,tl;
    int total=144981744;
// total population=1,441,981,744
//Percentage of Women: 48.4%
// Literacy Rates:
// Overall: 85.95%
// Men: 80.95%
// Women: 62.84%



    w=(total*48.4)/100;
    printf("no of women= %d\n",w);

    m=(total*51.6)/100;
    printf("no of men= %d\n",m);

   tl=(85.95*total)/100;
   printf("total illeterate population= %d\n",tl);

   lw=(62.84*tl)/100;
   printf("no of literate women= %d\n",lw);

   lm=(80.95*tl)/100;
   printf("no of Literate men= %d\n",lm);
}
