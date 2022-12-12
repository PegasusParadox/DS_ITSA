#include<stdio.h>

int main(){
    int min=0;
    double ans=0;
    scanf("%d",&min);
    if(min>=1500){
        ans=min*0.9*0.79;
        int tmp=ans*100;
        if(tmp%10>=5){
            ans+=0.1;
        }
        printf("%.1lf\n",ans);
    }
    else if(min>800){
        ans=min*0.9*0.9;
        int tmp=ans*100;
        if(tmp%10>=5){
            ans+=0.1;
        }
        printf("%.1lf\n",ans);
    }
    else{
        ans=min*0.9;
        int tmp=ans*100;
        if(tmp%10>=5){
            ans+=0.1;
        }
        printf("%.1lf\n",ans);
    }
}