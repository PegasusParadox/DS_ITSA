#include<stdio.h>

int main(){
    int num=0,ans=0;
    while(scanf("%d",&num)!=EOF){
        ans=ans+num*num*num;
    }
    printf("%d\n",ans);
}