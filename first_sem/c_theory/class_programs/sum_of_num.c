#include <stdio.h>
int main(){
    int N;
    int sum=0;
    int count;
    printf("enter the N value:");
    scanf("%d",&N);
    if (N<5){
        printf("enter a number greater than 5...");}
    else if(N>5){
        for(count=5;count<N;count++)
        sum=sum+count;}
    if (N>5){
        printf("the sum of N number is: %d",sum);}
}