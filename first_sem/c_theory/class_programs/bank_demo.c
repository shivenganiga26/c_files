#include<stdio.h>
int main(){
    int accountno=1000;
    int useraccountno;           
    int balance=500;
    int option;
    int withdrawn;
    int added;
     while (option!=5);
    {
    printf("--------welcome to my bank---------\n");
    printf("1.deposit\n");
    printf("2.withdraw\n");
    printf("3.account view\n");
    printf("4.exit\n");
    printf("enter your option:");
    scanf("%d",&option);
        switch (option){
            case 1:
            printf("enter ur account no:");
            scanf("%d",&useraccountno);
            if (useraccountno==accountno){
                printf("valid account\n");
                printf("enter amount to deposit:");
                scanf("%d",&added);
                int sum=balance+added;
                printf("account updated successfully...");
                printf("ur balance is=%d",sum);}
            else{
                printf("invalid account");
            }
            break;
            case 2:
            printf("enter ur account no:");
            scanf("%d",&useraccountno);
            if (useraccountno==accountno){
                printf("valid account\n");
                printf("enter amount to withdraw=");
                scanf("%d",&withdrawn);
                if (withdrawn>balance){
                    printf("insufficient balance\n");}
                else{
                    int sum=balance-withdrawn;
                    printf("account updated successfully...\n");
                    printf("ur balance is=%d",sum);}}
            else{
                printf("invalid account");
            }  
            break;
            case 3:
            printf("enter ur account no");
            scanf("%d",&useraccountno);
            if (useraccountno==accountno){
                printf("valid account\n");
                printf("ur balance is:%d",balance);}
            else{
                printf("\'invalid account\'");}
            break;
            case 4:
            printf("exit");
            break;
            default:
            printf("invalid option");
        }
    return 0;
    }
}