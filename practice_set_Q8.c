#include<stdio.h>
 typedef struct Bank{
     int acc_no;
     char acc_holder_name[20];
     int balance;
     char bank_name[20];

 }account;


int main(){
    account acc[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the account number for account %d ",i+1);
        scanf("%d",&acc[i].acc_no);

        printf("Enter the name of account holder for account %d ",i+1);
        scanf("%s",acc[i].acc_holder_name);

        printf("Enter the balance of account %d ",i+1);
        scanf("%d",&acc[i].balance);

        printf("Enter the Bank name for account %d ",i+1);
        scanf("%s",acc[i].bank_name);

    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("The account number is %d\n", acc[i].acc_no);
        printf("The account holder name is %s\n", acc[i].acc_holder_name);
        printf("The balance is %d\n", acc[i].balance);
        printf("The Bank name is %s\n", acc[i].bank_name);
    }
    

return 0;
}