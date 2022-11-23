#include<stdio.h>

int main(){
    int m;
    scanf("%d",&m);
    int ans=m*100/(100-2.54*30);
    printf("%d\n",ans+1);
}