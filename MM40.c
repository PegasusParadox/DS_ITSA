#include<stdio.h>

int main(){
    int num=0,ans=0;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        ans+=i;
        if(i==num){
            printf("%d = %d\n",i,ans);
            break;
        }
        printf("%d + ",i);
    }
}