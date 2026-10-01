#include<stdio.h>
int main(){
    for(int j=0;j<=5;j++){
        if (j==2){
            break;
        }
        printf("loop started\n");
        for(int i=0;i<5;i++){
            printf("from inside the loop\n");
            break;
            printf("from inner loop\n");}
        printf("from outer loop\n");
    }
    printf("program terminated..");
}
