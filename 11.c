#include<stdio.h>

int main(){
    int matrix[100][100];
    int col=0,row=0;
    while(scanf("%d%d",&row,&col)!=EOF){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                scanf("%d",&matrix[j][i]);
            }
        }
        for(int i=0;i<col;i++){
            for(int j=0;j<row-1;j++){
                printf("%d",matrix[i][j]);
                printf(" ");
            }
            printf("%d",matrix[i][row-1]);
            printf("\n");
        }
    }
    return 0;
}
