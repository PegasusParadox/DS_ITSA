#include<stdio.h>

int main(){
    int num[10000];
    int i=0;
    while(scanf("%d",&num[i])!=EOF){
        i++;
    }
    i=i-1;
    printf("%d",num[i]);
    for(i=i-1;i>=0;i--){
        printf(" %d",num[i]);
    }
    printf("\n");
}