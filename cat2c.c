#include <stdio.h>


int main (){
    int scores [2][2]={
        {35,70},
        {59,67} 


};
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf("%d\t",scores[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<2;i++){
    for(int j=0;j<2;j++);{
            printf("%d\t",scores[i][j]);
        }
        printf("\n");
    }
       return 0;
       }