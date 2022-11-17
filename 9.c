#include<stdio.h>

int main(){
    int num,sum;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(i%3==0){
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
}
