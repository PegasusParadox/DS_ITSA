#include<stdio.h>

int main(){
    int year=0;
    scanf("%d",&year);
    if(year%400==0){
        printf("Bissextile Year\n");
    }
    else if(year%4==0){
        if(year%100!=0){
            printf("Bissextile Year\n");
        }
        else{
            printf("Common Year\n");
        }        
    }
    else{
        printf("Common Year\n");
    } 
}