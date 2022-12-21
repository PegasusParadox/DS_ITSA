#include<stdio.h>

int main(){
    int num=0;
    scanf("%d",&num);
    int tmp=35;
    if(num>=35){
        printf("%d",tmp);
        tmp+=35;
    }
    while(tmp<=num){
        printf(" %d",tmp);
        tmp+=35;
    }
    printf("\n");
}