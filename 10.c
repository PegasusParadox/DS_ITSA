#include<stdio.h>

int GCD(int a,int b){
    if(b==0){
        return a;
    }
    return GCD(b,a%b);
}
int main(){
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    int tmp=GCD(num1,num2);
    printf("%d\n",tmp);
}
