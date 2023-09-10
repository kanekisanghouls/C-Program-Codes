#include <stdio.h>
void starPattern(int row,int col){
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(j>i){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n");
}
int main(){
    int row,col;
    printf("Enter the value of row & col:");
    scanf("%d%d",&row,&col);
    starPattern(row,col);
    return 0;
}
