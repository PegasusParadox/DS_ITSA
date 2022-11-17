#include<stdio.h>

int main(){
    float up=0,down=0,h=0;
    float ans=0;
    scanf("%f%f%f",&up,&down,&h);
    ans=(up+down)*h/2;
    printf("Trapezoid area:%.1f\n",ans);
}