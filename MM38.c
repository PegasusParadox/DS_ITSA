#include<stdio.h>

int main(){
    int edge1=0,edge2=0,edge3=0;
    scanf("%d%d%d",&edge1,&edge2,&edge3);
    if(edge1+edge2<=edge3){
        printf("unfit\n");
    }
    else if(edge1+edge3<=edge2){
        printf("unfit\n");
    }
    else if(edge3+edge2<=edge1){
        printf("unfit\n");
    }
    else{
        printf("fit\n");
    }
}