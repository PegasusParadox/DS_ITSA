#include<stdio.h>
#include<math.h>

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int tmp=x*x+y*y;
    if(tmp<=10000){
        printf("inside\n");
    }
    else{
        printf("outside\n");
    }
    return 0;
}
