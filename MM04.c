#include<stdio.h>

int main(){
    long long int num1=0,num2=0;
    scanf("%lld%lld",&num1,&num2);
    printf("%lld+%lld=%lld\n",num1,num2,num1+num2);
    printf("%lld*%lld=%lld\n",num1,num2,num1*num2);
    printf("%lld-%lld=%lld\n",num1,num2,num1-num2);
    if(num1%num2<0){
        printf("%lld/%lld=%lld...%lld\n",num1,num2,num1/num2-1,num1%num2+num2);
    }
    else{
        printf("%lld/%lld=%lld...%lld\n",num1,num2,num1/num2,num1%num2);
    }
}