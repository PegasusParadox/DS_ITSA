#include<stdio.h>
#include<math.h>

int recursive(int n){
    if(n==0){
        return n+1;
    }
    else{
        return recursive(n-1)+recursive((n/2));
    }
}

int main(){
    int num;
    scanf("%d",&num);
    int tmp=recursive(num);
    printf("%d\n",tmp);
}