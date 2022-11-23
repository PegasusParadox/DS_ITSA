#include<stdio.h>

int main(){
    int price=0;
    scanf("%d",&price);
    int ten=0,five=0,one=0;
    while(price!=0){
        if(price>=10){
            ten++;
            price-=10;
        }
        else if(price>=5 && price<10){
            five++;
            price-=5;
        }
        else if(price>=1 && price<5){
            one++;
            price-=1;
        }
    }
    printf("NT10=%d\n",ten);
    printf("NT5=%d\n",five);
    printf("NT1=%d\n",one);
}