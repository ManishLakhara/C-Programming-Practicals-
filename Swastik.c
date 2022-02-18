// Swastik Symbole 
#include <stdio.h>
void main(void){ // no args in main
    int n=7,mid=n/2+1; // length most be in Odd
    int i=0,j=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((i<=mid && j==1) || j==mid || i == mid || (i==1 && j>=mid) || (j==n && i>=mid) || (i==n && j<=mid)){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}