#include<stdio.h>

int main(){
    int input_sec=0;
    int day=0,hour=0,min=0;
    scanf("%d",&input_sec);
    while(input_sec>60){
        if(input_sec>86400){
            day++;
            input_sec-=86400;
        }
        else if(input_sec>3600){
            hour++;
            input_sec-=3600;
        }
        else if(input_sec>60){
            min++;
            input_sec-=60;
        }
    }
    printf("%d days\n",day);
    printf("%d hours\n",hour);
    printf("%d minutes\n",min);
    printf("%d seconds\n",input_sec);
}