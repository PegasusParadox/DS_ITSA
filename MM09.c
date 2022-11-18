#include<stdio.h>

int main(){
    int num=0;
    scanf("%d",&num);
    int ans=2;
    if(num>31){
        printf("Value of more than 31\n");
    }
    else{
        for(int i=1;i<num;i++){
            ans=ans*2;
        }
        printf("%d\n",ans);
    }  
}