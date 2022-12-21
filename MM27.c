#include<stdio.h>

int main(){
    int num1=0,num2=0;
    scanf("%d%d",&num1,&num2);
    int ans=0;
    if(num1<=num2){
        for(int i=num1;i<=num2;i++){
            ans+=i;
        }  
    }
    else{
        for(int i=num2;i<=num1;i++){
            ans+=i;
        }
    }
    printf("%d\n",ans);
}