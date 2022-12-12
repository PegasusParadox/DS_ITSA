#include<stdio.h>

int main(){
    long long int ans=1;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    printf("%lld\n",ans);
}